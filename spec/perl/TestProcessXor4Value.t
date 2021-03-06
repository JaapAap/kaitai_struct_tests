package spec::perl::TestProcessXor4Value;

use strict;
use warnings;
use base qw(Test::Class);
use Test::More;
use ProcessXor4Value;

sub test_process_xor4_value: Test(2) {
    my $r = ProcessXor4Value->from_file('src/process_xor_4.bin');

    is_deeply($r->key(), pack('C*', (0xec, 0xbb, 0xa3, 0x14)), 'Equals');
    is($r->buf(), "foo bar", 'Equals');
}

Test::Class->runtests;
