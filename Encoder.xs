/* Must be defined before including Perl header files or we slow down by 2x! */
#define PERL_NO_GET_CONTEXT

#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#define NEED_newSV_type
#include "ppport.h"

#include "srl_encoder.h"
#include "srl_buffer.h"

/* Generated code for exposing C constants to Perl */
#include "srl_protocol.h"
#include "const-c.inc"

#include "ptable.h"

#if defined(cv_set_call_checker) && defined(XopENTRY_set)
# define USE_CUSTOM_OPS 1
#else
# define USE_CUSTOM_OPS 0
#endif

#define pp1_sereal_encode_with_object(has_hdr) THX_pp1_sereal_encode_with_object(aTHX_ has_hdr)
static void
THX_pp1_sereal_encode_with_object(pTHX_ U8 has_hdr)
{
  SV *encoder_ref_sv, *encoder_sv, *body_sv, *header_sv;
  srl_encoder_t *enc;
  char *stash_name;
  SV *ret_sv;
  dSP;

  header_sv = has_hdr ? POPs : NULL;
  body_sv = POPs;
  PUTBACK;

  encoder_ref_sv = TOPs;

  if (!expect_true(
        encoder_ref_sv &&
        SvROK(encoder_ref_sv) &&
        (encoder_sv = SvRV(encoder_ref_sv)) &&
        SvOBJECT(encoder_sv) &&
        (stash_name= HvNAME(SvSTASH(encoder_sv))) &&
        !strcmp(stash_name, "Sereal::Encoder")
     ))
  {
    croak("handle is not a Sereal::Encoder handle");
  }

  enc= (srl_encoder_t *)SvIV(encoder_sv);

  if (header_sv && !SvOK(header_sv))
    header_sv = NULL;

  /* We always copy the string since we might reuse the string buffer. That
   * means we already have to do a malloc and we might as well use the
   * opportunity to allocate only as much memory as we really need to hold
   * the output. */
  ret_sv= srl_dump_data_structure_mortal_sv(aTHX_ enc, body_sv, header_sv, SRL_ENC_SV_COPY_ALWAYS);
  SPAGAIN;
  TOPs = ret_sv;
}

#if USE_CUSTOM_OPS

static OP *
THX_pp_sereal_encode_with_object(pTHX)
{
  pp1_sereal_encode_with_object(PL_op->op_private);
  return NORMAL;
}

static OP *
THX_ck_entersub_args_sereal_encode_with_object(pTHX_ OP *entersubop, GV *namegv, SV *ckobj)
{
  OP *pushop, *firstargop, *cvop, *lastargop, *argop, *newop;
  int arity;

  /* Walk the OP structure under the "entersub" to validate that we
   * can use the custom OP implementation. */

  entersubop = ck_entersub_args_proto(entersubop, namegv, ckobj);
  pushop = cUNOPx(entersubop)->op_first;
  if (!pushop->op_sibling)
    pushop = cUNOPx(pushop)->op_first;
  firstargop = pushop->op_sibling;

  for (cvop = firstargop; cvop->op_sibling; cvop = cvop->op_sibling) ;

  lastargop = pushop;

  for (arity = 0, lastargop = pushop, argop = firstargop; argop != cvop;
       lastargop = argop, argop = argop->op_sibling)
  {
    arity++;
  }

  if (expect_false(arity < 2 || arity > 3))
    return entersubop;

  /* If we get here, we can replace the entersub with a suitable
   * sereal_encode_with_object custom OP. */

  pushop->op_sibling = cvop;
  lastargop->op_sibling = NULL;
  op_free(entersubop);
  newop = newUNOP(OP_CUSTOM, 0, firstargop);
  newop->op_private = arity == 3;
  newop->op_ppaddr = THX_pp_sereal_encode_with_object;

  return newop;
}

#endif /* USE_CUSTOM_OPS */

static void
THX_xsfunc_sereal_encode_with_object(pTHX_ CV *cv)
{
  dMARK;
  dSP;
  SSize_t arity = SP - MARK;
  PERL_UNUSED_ARG(cv);
  if (arity < 2 || arity > 3)
    croak("bad Sereal encoder usage");
  pp1_sereal_encode_with_object(arity == 3);
}

MODULE = Sereal::Encoder        PACKAGE = Sereal::Encoder
PROTOTYPES: DISABLE

BOOT:
{
#if USE_CUSTOM_OPS
  {
    XOP *xop;
    Newxz(xop, 1, XOP);
    XopENTRY_set(xop, xop_name, "sereal_encode_with_object");
    XopENTRY_set(xop, xop_desc, "sereal_encode_with_object");
    XopENTRY_set(xop, xop_class, OA_UNOP);
    Perl_custom_op_register(aTHX_ THX_pp_sereal_encode_with_object, xop);
  }
#endif /* USE_CUSTOM_OPS */
  {
    GV *gv;
    CV *cv = newXSproto_portable("Sereal::Encoder::sereal_encode_with_object",
                THX_xsfunc_sereal_encode_with_object, __FILE__, "$$;$");
#if USE_CUSTOM_OPS
    cv_set_call_checker(cv, THX_ck_entersub_args_sereal_encode_with_object, (SV*)cv);
#endif /* USE_CUSTOM_OPS */
    gv = gv_fetchpv("Sereal::Encoder::encode", GV_ADDMULTI, SVt_PVCV);
    GvCV_set(gv, cv);
  }
}

srl_encoder_t *
new(CLASS, opt = NULL)
    char *CLASS;
    HV *opt;
  CODE:
    RETVAL = srl_build_encoder_struct(aTHX_ opt);
    RETVAL->flags |= SRL_F_REUSE_ENCODER;
  OUTPUT: RETVAL

void
DESTROY(enc)
    srl_encoder_t *enc;
  CODE:
    srl_destroy_encoder(aTHX_ enc);


void
encode_sereal(src, opt = NULL)
    SV *src;
    HV *opt;
  PREINIT:
    srl_encoder_t *enc;
  PPCODE:
    enc = srl_build_encoder_struct(aTHX_ opt);
    assert(enc != NULL);
    /* Avoid copy by stealing string buffer if it is not too large.
     * This makes sense in the functional interface since the string
     * buffer isn't ever going to be reused. */
    ST(0) = srl_dump_data_structure_mortal_sv(aTHX_ enc, src, NULL, SRL_ENC_SV_REUSE_MAYBE);
    XSRETURN(1);

void
encode_sereal_with_header_data(src, hdr_user_data_src, opt = NULL)
    SV *src;
    SV *hdr_user_data_src;
    HV *opt;
  PREINIT:
    srl_encoder_t *enc;
  PPCODE:
    if (!SvOK(hdr_user_data_src))
      hdr_user_data_src = NULL;
    enc = srl_build_encoder_struct(aTHX_ opt);
    assert(enc != NULL);
    /* Avoid copy by stealing string buffer if it is not too large.
     * This makes sense in the functional interface since the string
     * buffer isn't ever going to be reused. */
    ST(0) = srl_dump_data_structure_mortal_sv(aTHX_ enc, src, hdr_user_data_src, SRL_ENC_SV_REUSE_MAYBE);
    XSRETURN(1);

MODULE = Sereal::Encoder        PACKAGE = Sereal::Encoder::Constants
PROTOTYPES: DISABLE

INCLUDE: const-xs.inc

MODULE = Sereal::Encoder        PACKAGE = Sereal::Encoder::_ptabletest

void
test()
  PREINIT:
    PTABLE_t *tbl;
    PTABLE_ITER_t *iter;
    PTABLE_ENTRY_t *ent;
    UV i, n = 20;
    char *check[20];
    char fail[5] = "not ";
    char noop[1] = "";
  CODE:
    tbl = PTABLE_new_size(10);
    for (i = 0; i < (UV)n; ++i) {
      PTABLE_store(tbl, (void *)(1000+i), (void *)(1000+i));
      check[i] = fail;
    }
    for (i = 0; i < (UV)n; ++i) {
      const UV res = (UV)PTABLE_fetch(tbl, (void *)(1000+i));
      printf("%sok %u - fetch %u\n", (res == (UV)(1000+i)) ? noop : fail, (unsigned int)(1+i), (unsigned int)(i+1));
    }
    iter = PTABLE_iter_new(tbl);
    while ( NULL != (ent = PTABLE_iter_next(iter)) ) {
      const UV res = ((UV)ent->value) - 1000;
      if (res < 20)
        check[res] = noop;
      else
        abort();
    }
    for (i = 0; i < (UV)n; ++i) {
      printf("%sok %u - iter %u\n", check[i], (unsigned int)(21+i), (unsigned int)(i+1));
    }
    PTABLE_iter_free(iter);
    PTABLE_free(tbl);
