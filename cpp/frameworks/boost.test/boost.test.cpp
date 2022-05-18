#define BOOST_TEST_MODULE BoostTest
#include <boost/test/included/unit_test.hpp>
#include "../../src/index.cpp"

BOOST_AUTO_TEST_SUITE( half_plus_one_test_suite )

BOOST_AUTO_TEST_CASE( test_1 )
{
    BOOST_TEST( half_plus_one(0.0) == 1.0 );
}

BOOST_AUTO_TEST_CASE( test_2)
{
    BOOST_TEST( half_plus_one(1.23456) == 1.61728 );
}

BOOST_AUTO_TEST_CASE( test_3 )
{
    BOOST_TEST( half_plus_one(-1.0) == 0.5 );
}

BOOST_AUTO_TEST_CASE( test_4 )
{
    BOOST_TEST( half_plus_one(-1.23456) == 0.38272 );
}

BOOST_AUTO_TEST_SUITE_END()