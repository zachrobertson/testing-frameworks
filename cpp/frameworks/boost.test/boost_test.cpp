#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE BoostTest
#include <boost/test/included/unit_test.hpp>
#include "../index.cpp"

BOOST_AUTO_TEST_CASE(half_plus_one_test)
{
    BOOST_CHECK_EQUAL(half_plus_one(0.0), 1.0);
    BOOST_CHECK_EQUAL(half_plus_one(1.0), 1.5);
}