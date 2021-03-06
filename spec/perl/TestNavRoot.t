package spec::perl::TestNavRoot;

use strict;
use warnings;
use base qw(Test::Class);
use Test::More;
use NavRoot;

sub test_nav_root: Test(5) {
    my $r = NavRoot->from_file('src/nav.bin');

    is($r->header()->qty_entries(), 2, 'Equals');
    is($r->header()->filename_len(), 8, 'Equals');

    is(scalar(@{$r->index()->entries()}), 2, 'Equals');
    is($r->index()->entries()->[0]->filename(), 'FIRST___', 'Equals');
    is($r->index()->entries()->[1]->filename(), 'SECOND__', 'Equals');
}

Test::Class->runtests;
