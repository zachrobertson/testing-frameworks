#define BOOST_TEST_MODULE BoostTest
#include <boost/test/included/unit_test.hpp>
#include "../../src/index.cpp"

BOOST_AUTO_TEST_CASE(half_plus_one_test)
{
    BOOST_CHECK_EQUAL(half_plus_one(0.0), 1.0);
    BOOST_CHECK_EQUAL(half_plus_one(1.23456), 1.61728);
    BOOST_CHECK_EQUAL(half_plus_one(-1.0), 0.5);
    BOOST_CHECK_EQUAL(half_plus_one(-1.23456), 0.38272);

}