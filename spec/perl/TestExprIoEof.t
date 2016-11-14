package spec::perl::TestExprIoEof;

use strict;
use warnings;
use base qw(Test::Class);
use Test::More;
use ExprIoEof;

sub test_expr_io_eof: Test(4) {
    my $r = ExprIoEof->from_file('src/fixed_struct.bin');

    is($r->substream1()->one(), 1262698832, 'Equals');
    is(defined($r->substream1()->two()), '', 'Equals');

    is($r->substream2()->one(), 4294914349, 'Equals');
    is($r->substream2()->two(), 1262698832, 'Equals');
}

Test::Class->runtests;