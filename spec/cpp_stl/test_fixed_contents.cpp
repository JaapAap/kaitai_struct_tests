#include <boost/test/unit_test.hpp>

#include <fixed_contents.h>

#include <iostream>
#include <fstream>
#include <vector>

BOOST_AUTO_TEST_CASE(test_fixed_contents) {
    std::ifstream ifs("src/fixed_struct.bin", std::ifstream::binary);
    kaitai::kstream ks(&ifs);
    fixed_contents_t* r = new fixed_contents_t(&ks);

    delete r;
}
