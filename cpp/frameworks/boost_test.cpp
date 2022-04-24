/*
    There are a few different ways to include the Boost.Test libray.
        1. Header-only variant:
/**/

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE BoostTest
#include <boost/test/included/unit_test.hpp>

int subtract(int x, int y)
{
    return x - y;
}

BOOST_AUTO_TEST_CASE(subtract_test)
{
    BOOST_CHECK_EQUAL(subtract(2, 1), 1);
    BOOST_CHECK_EQUAL(subtract(2, 2), 0);
    BOOST_CHECK_EQUAL(subtract(2, 3), -1);
}