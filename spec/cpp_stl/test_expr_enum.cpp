#include <boost/test/unit_test.hpp>

#include <expr_enum.h>

#include <iostream>
#include <fstream>
#include <vector>

BOOST_AUTO_TEST_CASE(test_expr_enum) {
    std::ifstream ifs("src/term_strz.bin", std::ifstream::binary);
    kaitai::kstream ks(&ifs);
    expr_enum_t* r = new expr_enum_t(&ks);

    BOOST_CHECK_EQUAL(r->const_dog(), expr_enum_t::ANIMAL_DOG);
    BOOST_CHECK_EQUAL(r->derived_boom(), expr_enum_t::ANIMAL_BOOM);
    BOOST_CHECK_EQUAL(r->derived_dog(), expr_enum_t::ANIMAL_DOG);

    delete r;
}
