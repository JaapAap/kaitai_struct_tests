#include <boost/test/unit_test.hpp>

#include <repeat_n_strz_double.h>

#include <iostream>
#include <fstream>
#include <vector>

#include "helpers.h"

BOOST_AUTO_TEST_CASE(test_repeat_n_strz_double) {
    std::ifstream ifs("src/repeat_n_strz.bin", std::ifstream::binary);
    kaitai::kstream ks(&ifs);
    repeat_n_strz_double_t* r = new repeat_n_strz_double_t(&ks);

    BOOST_CHECK_EQUAL(r->qty(), 2);
    COMPARE_ARRAY(std::string, r->lines1(), std::string("foo"));
    COMPARE_ARRAY(std::string, r->lines2(), std::string("bar"));

    delete r;
}