#include <boost/test/unit_test.hpp>

#include <nav_parent.h>

#include <iostream>
#include <fstream>
#include <vector>

BOOST_AUTO_TEST_CASE(test_nav_parent) {
    std::ifstream ifs("src/nav.bin", std::ifstream::binary);
    kaitai::kstream ks(&ifs);
    nav_parent_t* r = new nav_parent_t(&ks);

    BOOST_CHECK_EQUAL(r->header()->qty_entries(), 2);
    BOOST_CHECK_EQUAL(r->header()->filename_len(), 8);

    BOOST_CHECK_EQUAL(r->index()->entries()->size(), 2);
    BOOST_CHECK_EQUAL(r->index()->entries()->at(0)->filename(), "FIRST___");
    BOOST_CHECK_EQUAL(r->index()->entries()->at(1)->filename(), "SECOND__");

    delete r;
}
