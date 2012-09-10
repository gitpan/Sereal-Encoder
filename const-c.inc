#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_11 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     SRL_HDR_NEG SRL_HDR_PAD SRL_HDR_POS */
  /* Offset 9 gives the best switch position.  */
  switch (name[9]) {
  case 'A':
    if (memEQ(name, "SRL_HDR_PAD", 11)) {
    /*                        ^        */
#ifdef SRL_HDR_PAD
      *iv_return = SRL_HDR_PAD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "SRL_HDR_NEG", 11)) {
    /*                        ^        */
#ifdef SRL_HDR_NEG
      *iv_return = SRL_HDR_NEG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "SRL_HDR_POS", 11)) {
    /*                        ^        */
#ifdef SRL_HDR_POS
      *iv_return = SRL_HDR_POS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_12 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     SRL_HDR_COPY SRL_HDR_HASH SRL_HDR_MANY SRL_HDR_REFN SRL_HDR_REFP
     SRL_HDR_TRUE */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case 'F':
    if (memEQ(name, "SRL_HDR_REFN", 12)) {
    /*                         ^        */
#ifdef SRL_HDR_REFN
      *iv_return = SRL_HDR_REFN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "SRL_HDR_REFP", 12)) {
    /*                         ^        */
#ifdef SRL_HDR_REFP
      *iv_return = SRL_HDR_REFP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "SRL_HDR_MANY", 12)) {
    /*                         ^        */
#ifdef SRL_HDR_MANY
      *iv_return = SRL_HDR_MANY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "SRL_HDR_COPY", 12)) {
    /*                         ^        */
#ifdef SRL_HDR_COPY
      *iv_return = SRL_HDR_COPY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "SRL_HDR_HASH", 12)) {
    /*                         ^        */
#ifdef SRL_HDR_HASH
      *iv_return = SRL_HDR_HASH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "SRL_HDR_TRUE", 12)) {
    /*                         ^        */
#ifdef SRL_HDR_TRUE
      *iv_return = SRL_HDR_TRUE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_13 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     SRL_HDR_ALIAS SRL_HDR_ARRAY SRL_HDR_FALSE SRL_HDR_FLOAT SRL_HDR_UNDEF */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case 'D':
    if (memEQ(name, "SRL_HDR_UNDEF", 13)) {
    /*                         ^         */
#ifdef SRL_HDR_UNDEF
      *iv_return = SRL_HDR_UNDEF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "SRL_HDR_ALIAS", 13)) {
    /*                         ^         */
#ifdef SRL_HDR_ALIAS
      *iv_return = SRL_HDR_ALIAS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "SRL_HDR_FALSE", 13)) {
    /*                         ^         */
#ifdef SRL_HDR_FALSE
      *iv_return = SRL_HDR_FALSE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "SRL_HDR_FLOAT", 13)) {
    /*                         ^         */
#ifdef SRL_HDR_FLOAT
      *iv_return = SRL_HDR_FLOAT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "SRL_HDR_ARRAY", 13)) {
    /*                         ^         */
#ifdef SRL_HDR_ARRAY
      *iv_return = SRL_HDR_ARRAY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_14 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     SRL_HDR_BINARY SRL_HDR_DOUBLE SRL_HDR_EXTEND SRL_HDR_OBJECT SRL_HDR_REGEXP
     SRL_HDR_VARINT SRL_HDR_WEAKEN SRL_HDR_ZIGZAG */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'B':
    if (memEQ(name, "SRL_HDR_BINARY", 14)) {
    /*                       ^            */
#ifdef SRL_HDR_BINARY
      *iv_return = SRL_HDR_BINARY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "SRL_HDR_DOUBLE", 14)) {
    /*                       ^            */
#ifdef SRL_HDR_DOUBLE
      *iv_return = SRL_HDR_DOUBLE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "SRL_HDR_EXTEND", 14)) {
    /*                       ^            */
#ifdef SRL_HDR_EXTEND
      *iv_return = SRL_HDR_EXTEND;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "SRL_HDR_OBJECT", 14)) {
    /*                       ^            */
#ifdef SRL_HDR_OBJECT
      *iv_return = SRL_HDR_OBJECT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "SRL_HDR_REGEXP", 14)) {
    /*                       ^            */
#ifdef SRL_HDR_REGEXP
      *iv_return = SRL_HDR_REGEXP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "SRL_HDR_VARINT", 14)) {
    /*                       ^            */
#ifdef SRL_HDR_VARINT
      *iv_return = SRL_HDR_VARINT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "SRL_HDR_WEAKEN", 14)) {
    /*                       ^            */
#ifdef SRL_HDR_WEAKEN
      *iv_return = SRL_HDR_WEAKEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Z':
    if (memEQ(name, "SRL_HDR_ZIGZAG", 14)) {
    /*                       ^            */
#ifdef SRL_HDR_ZIGZAG
      *iv_return = SRL_HDR_ZIGZAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_15 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     SRL_HDR_HASHREF SRL_HDR_NEG_LOW SRL_HDR_OBJECTV SRL_HDR_POS_LOW */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'H':
    if (memEQ(name, "SRL_HDR_HASHREF", 15)) {
    /*                       ^             */
#ifdef SRL_HDR_HASHREF
      *iv_return = SRL_HDR_HASHREF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "SRL_HDR_NEG_LOW", 15)) {
    /*                       ^             */
#ifdef SRL_HDR_NEG_LOW
      *iv_return = SRL_HDR_NEG_LOW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "SRL_HDR_OBJECTV", 15)) {
    /*                       ^             */
#ifdef SRL_HDR_OBJECTV
      *iv_return = SRL_HDR_OBJECTV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "SRL_HDR_POS_LOW", 15)) {
    /*                       ^             */
#ifdef SRL_HDR_POS_LOW
      *iv_return = SRL_HDR_POS_LOW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_16 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     SRL_HDR_ARRAYREF SRL_HDR_NEG_HIGH SRL_HDR_POS_HIGH SRL_HDR_RESERVED
     SRL_HDR_STR_UTF8 SRL_NEG_MIN_SIZE SRL_POS_MAX_SIZE */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'A':
    if (memEQ(name, "SRL_HDR_ARRAYREF", 16)) {
    /*                       ^              */
#ifdef SRL_HDR_ARRAYREF
      *iv_return = SRL_HDR_ARRAYREF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "SRL_NEG_MIN_SIZE", 16)) {
    /*                       ^              */
#ifdef SRL_NEG_MIN_SIZE
      *iv_return = SRL_NEG_MIN_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "SRL_POS_MAX_SIZE", 16)) {
    /*                       ^              */
#ifdef SRL_POS_MAX_SIZE
      *iv_return = SRL_POS_MAX_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "SRL_HDR_NEG_HIGH", 16)) {
    /*                       ^              */
#ifdef SRL_HDR_NEG_HIGH
      *iv_return = SRL_HDR_NEG_HIGH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "SRL_HDR_POS_HIGH", 16)) {
    /*                       ^              */
#ifdef SRL_HDR_POS_HIGH
      *iv_return = SRL_HDR_POS_HIGH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "SRL_HDR_RESERVED", 16)) {
    /*                       ^              */
#ifdef SRL_HDR_RESERVED
      *iv_return = SRL_HDR_RESERVED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "SRL_HDR_STR_UTF8", 16)) {
    /*                       ^              */
#ifdef SRL_HDR_STR_UTF8
      *iv_return = SRL_HDR_STR_UTF8;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_20 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     SRL_HDR_ARRAYREF_LOW SRL_HDR_HASHREF_HIGH SRL_HDR_PACKET_START
     SRL_HDR_RESERVED_LOW SRL_HDR_SHORT_BINARY SRL_PROTOCOL_VERSION */
  /* Offset 11 gives the best switch position.  */
  switch (name[11]) {
  case 'A':
    if (memEQ(name, "SRL_HDR_ARRAYREF_LOW", 20)) {
    /*                          ^               */
#ifdef SRL_HDR_ARRAYREF_LOW
      *iv_return = SRL_HDR_ARRAYREF_LOW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "SRL_HDR_RESERVED_LOW", 20)) {
    /*                          ^               */
#ifdef SRL_HDR_RESERVED_LOW
      *iv_return = SRL_HDR_RESERVED_LOW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "SRL_HDR_HASHREF_HIGH", 20)) {
    /*                          ^               */
#ifdef SRL_HDR_HASHREF_HIGH
      *iv_return = SRL_HDR_HASHREF_HIGH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "SRL_HDR_PACKET_START", 20)) {
    /*                          ^               */
#ifdef SRL_HDR_PACKET_START
      *iv_return = SRL_HDR_PACKET_START;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "SRL_PROTOCOL_VERSION", 20)) {
    /*                          ^               */
#ifdef SRL_PROTOCOL_VERSION
      *iv_return = SRL_PROTOCOL_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "SRL_HDR_SHORT_BINARY", 20)) {
    /*                          ^               */
#ifdef SRL_HDR_SHORT_BINARY
      *iv_return = SRL_HDR_SHORT_BINARY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_25 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     SRL_HDR_SHORT_BINARY_HIGH SRL_MASK_SHORT_BINARY_LEN
     SRL_PROTOCOL_ENCODING_RAW SRL_PROTOCOL_VERSION_BITS
     SRL_PROTOCOL_VERSION_MASK */
  /* Offset 24 gives the best switch position.  */
  switch (name[24]) {
  case 'H':
    if (memEQ(name, "SRL_HDR_SHORT_BINARY_HIG", 24)) {
    /*                                       H      */
#ifdef SRL_HDR_SHORT_BINARY_HIGH
      *iv_return = SRL_HDR_SHORT_BINARY_HIGH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "SRL_PROTOCOL_VERSION_MAS", 24)) {
    /*                                       K      */
#ifdef SRL_PROTOCOL_VERSION_MASK
      *iv_return = SRL_PROTOCOL_VERSION_MASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "SRL_MASK_SHORT_BINARY_LE", 24)) {
    /*                                       N      */
#ifdef SRL_MASK_SHORT_BINARY_LEN
      *iv_return = SRL_MASK_SHORT_BINARY_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "SRL_PROTOCOL_VERSION_BIT", 24)) {
    /*                                       S      */
#ifdef SRL_PROTOCOL_VERSION_BITS
      *iv_return = SRL_PROTOCOL_VERSION_BITS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "SRL_PROTOCOL_ENCODING_RA", 24)) {
    /*                                       W      */
#ifdef SRL_PROTOCOL_ENCODING_RAW
      *iv_return = SRL_PROTOCOL_ENCODING_RAW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/bin/perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(SRL_HDR_ALIAS SRL_HDR_ARRAY SRL_HDR_ARRAYREF
	       SRL_HDR_ARRAYREF_HIGH SRL_HDR_ARRAYREF_LOW SRL_HDR_BINARY
	       SRL_HDR_COPY SRL_HDR_DOUBLE SRL_HDR_EXTEND SRL_HDR_FALSE
	       SRL_HDR_FLOAT SRL_HDR_HASH SRL_HDR_HASHREF SRL_HDR_HASHREF_HIGH
	       SRL_HDR_HASHREF_LOW SRL_HDR_LONG_DOUBLE SRL_HDR_MANY SRL_HDR_NEG
	       SRL_HDR_NEG_HIGH SRL_HDR_NEG_LOW SRL_HDR_OBJECT SRL_HDR_OBJECTV
	       SRL_HDR_PACKET_START SRL_HDR_PAD SRL_HDR_POS SRL_HDR_POS_HIGH
	       SRL_HDR_POS_LOW SRL_HDR_REFN SRL_HDR_REFP SRL_HDR_REGEXP
	       SRL_HDR_RESERVED SRL_HDR_RESERVED_HIGH SRL_HDR_RESERVED_LOW
	       SRL_HDR_SHORT_BINARY SRL_HDR_SHORT_BINARY_HIGH
	       SRL_HDR_SHORT_BINARY_LOW SRL_HDR_STR_UTF8 SRL_HDR_TRACK_FLAG
	       SRL_HDR_TRUE SRL_HDR_UNDEF SRL_HDR_VARINT SRL_HDR_WEAKEN
	       SRL_HDR_ZIGZAG SRL_MAGIC_STRING_LILIPUTIAN
	       SRL_MASK_ARRAYREF_COUNT SRL_MASK_HASHREF_COUNT
	       SRL_MASK_SHORT_BINARY_LEN SRL_NEG_MIN_SIZE SRL_POS_MAX_SIZE
	       SRL_PROTOCOL_ENCODING_MASK SRL_PROTOCOL_ENCODING_RAW
	       SRL_PROTOCOL_ENCODING_SNAPPY SRL_PROTOCOL_VERSION
	       SRL_PROTOCOL_VERSION_BITS SRL_PROTOCOL_VERSION_MASK));

print constant_types(), "\n"; # macro defs
foreach (C_constant ("Sereal::Encoder::Constants", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("Sereal::Encoder::Constants", $types);
__END__
   */

  switch (len) {
  case 11:
    return constant_11 (aTHX_ name, iv_return);
    break;
  case 12:
    return constant_12 (aTHX_ name, iv_return);
    break;
  case 13:
    return constant_13 (aTHX_ name, iv_return);
    break;
  case 14:
    return constant_14 (aTHX_ name, iv_return);
    break;
  case 15:
    return constant_15 (aTHX_ name, iv_return);
    break;
  case 16:
    return constant_16 (aTHX_ name, iv_return);
    break;
  case 18:
    if (memEQ(name, "SRL_HDR_TRACK_FLAG", 18)) {
#ifdef SRL_HDR_TRACK_FLAG
      *iv_return = SRL_HDR_TRACK_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 19:
    /* Names all of length 19.  */
    /* SRL_HDR_HASHREF_LOW SRL_HDR_LONG_DOUBLE */
    /* Offset 11 gives the best switch position.  */
    switch (name[11]) {
    case 'G':
      if (memEQ(name, "SRL_HDR_LONG_DOUBLE", 19)) {
      /*                          ^              */
#ifdef SRL_HDR_LONG_DOUBLE
        *iv_return = SRL_HDR_LONG_DOUBLE;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'H':
      if (memEQ(name, "SRL_HDR_HASHREF_LOW", 19)) {
      /*                          ^              */
#ifdef SRL_HDR_HASHREF_LOW
        *iv_return = SRL_HDR_HASHREF_LOW;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 20:
    return constant_20 (aTHX_ name, iv_return);
    break;
  case 21:
    /* Names all of length 21.  */
    /* SRL_HDR_ARRAYREF_HIGH SRL_HDR_RESERVED_HIGH */
    /* Offset 10 gives the best switch position.  */
    switch (name[10]) {
    case 'R':
      if (memEQ(name, "SRL_HDR_ARRAYREF_HIGH", 21)) {
      /*                         ^                 */
#ifdef SRL_HDR_ARRAYREF_HIGH
        *iv_return = SRL_HDR_ARRAYREF_HIGH;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'S':
      if (memEQ(name, "SRL_HDR_RESERVED_HIGH", 21)) {
      /*                         ^                 */
#ifdef SRL_HDR_RESERVED_HIGH
        *iv_return = SRL_HDR_RESERVED_HIGH;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 22:
    if (memEQ(name, "SRL_MASK_HASHREF_COUNT", 22)) {
#ifdef SRL_MASK_HASHREF_COUNT
      *iv_return = SRL_MASK_HASHREF_COUNT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 23:
    if (memEQ(name, "SRL_MASK_ARRAYREF_COUNT", 23)) {
#ifdef SRL_MASK_ARRAYREF_COUNT
      *iv_return = SRL_MASK_ARRAYREF_COUNT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 24:
    if (memEQ(name, "SRL_HDR_SHORT_BINARY_LOW", 24)) {
#ifdef SRL_HDR_SHORT_BINARY_LOW
      *iv_return = SRL_HDR_SHORT_BINARY_LOW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 25:
    return constant_25 (aTHX_ name, iv_return);
    break;
  case 26:
    if (memEQ(name, "SRL_PROTOCOL_ENCODING_MASK", 26)) {
#ifdef SRL_PROTOCOL_ENCODING_MASK
      *iv_return = SRL_PROTOCOL_ENCODING_MASK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 27:
    if (memEQ(name, "SRL_MAGIC_STRING_LILIPUTIAN", 27)) {
#ifdef SRL_MAGIC_STRING_LILIPUTIAN
      *iv_return = SRL_MAGIC_STRING_LILIPUTIAN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 28:
    if (memEQ(name, "SRL_PROTOCOL_ENCODING_SNAPPY", 28)) {
#ifdef SRL_PROTOCOL_ENCODING_SNAPPY
      *iv_return = SRL_PROTOCOL_ENCODING_SNAPPY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

