# Genereated code! Do not modify! See inc/Sereal/BuildTools.pm instead

package Sereal::Encoder::Constants;
use strict;
use warnings;
use Carp qw(croak);
use Sereal::Encoder; # for XSLoading
our @ISA = qw(Exporter);
require Exporter;
our @EXPORT_OK;
BEGIN { @EXPORT_OK = qw(
    SRL_MAGIC_STRING_LILIPUTIAN
    SRL_PROTOCOL_VERSION
    SRL_PROTOCOL_VERSION_BITS
    SRL_PROTOCOL_VERSION_MASK
    SRL_PROTOCOL_ENCODING_MASK
    SRL_PROTOCOL_ENCODING_RAW
    SRL_PROTOCOL_ENCODING_SNAPPY
    SRL_PROTOCOL_ENCODING_SNAPPY_INCREMENTAL
    SRL_POS_MAX_SIZE
    SRL_NEG_MIN_SIZE
    SRL_HDR_POS
    SRL_HDR_POS_LOW
    SRL_HDR_POS_HIGH
    SRL_HDR_NEG
    SRL_HDR_NEG_LOW
    SRL_HDR_NEG_HIGH
    SRL_HDR_VARINT
    SRL_HDR_ZIGZAG
    SRL_HDR_FLOAT
    SRL_HDR_DOUBLE
    SRL_HDR_LONG_DOUBLE
    SRL_HDR_UNDEF
    SRL_HDR_BINARY
    SRL_HDR_STR_UTF8
    SRL_HDR_REFN
    SRL_HDR_REFP
    SRL_HDR_HASH
    SRL_HDR_ARRAY
    SRL_HDR_OBJECT
    SRL_HDR_OBJECTV
    SRL_HDR_ALIAS
    SRL_HDR_COPY
    SRL_HDR_WEAKEN
    SRL_HDR_REGEXP
    SRL_HDR_RESERVED
    SRL_HDR_RESERVED_LOW
    SRL_HDR_RESERVED_HIGH
    SRL_HDR_FALSE
    SRL_HDR_TRUE
    SRL_HDR_MANY
    SRL_HDR_PACKET_START
    SRL_HDR_EXTEND
    SRL_HDR_PAD
    SRL_HDR_ARRAYREF
    SRL_MASK_ARRAYREF_COUNT
    SRL_HDR_ARRAYREF_LOW
    SRL_HDR_ARRAYREF_HIGH
    SRL_HDR_HASHREF
    SRL_MASK_HASHREF_COUNT
    SRL_HDR_HASHREF_LOW
    SRL_HDR_HASHREF_HIGH
    SRL_HDR_SHORT_BINARY
    SRL_HDR_SHORT_BINARY_LOW
    SRL_HDR_SHORT_BINARY_HIGH
    SRL_MASK_SHORT_BINARY_LEN
    SRL_HDR_TRACK_FLAG
  );
  my $code;
  foreach my $constname (@EXPORT_OK) {
    my ($error, $val) = constant($constname);
    if ($error) { croak($error); }
    $code .= "sub $constname () {$val}\n";
  }
  eval "$code\n1;" or do {
    my $err = $@ || 'Zombie error';
    die "Failed to generate constant subs: $err\n Code was:\n$code\n";
  };
}

sub SRL_MAGIC_STRING () {"=srl"}
push @EXPORT_OK, "SRL_MAGIC_STRING";
our %EXPORT_TAGS=(all => \@EXPORT_OK);
