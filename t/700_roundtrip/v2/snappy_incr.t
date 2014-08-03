#!perl
use strict;
use warnings;
use Sereal::Decoder;
use Data::Dumper;
use File::Spec;

use lib File::Spec->catdir(qw(t lib));
BEGIN {
    lib->import('lib')
        if !-d 't';
}

use Sereal::TestSet qw(:all);
use Test::More;

my $ok = have_encoder_and_decoder();
if (not $ok) {
    plan skip_all => 'Did not find right version of encoder';
}
else {
    run_roundtrip_tests(
        'snappy_incr',    { snappy_incr      => 1 } 
    );
}


pass();
done_testing();

