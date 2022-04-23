#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
// processor searches in an implementation dependent manner here
#include <boost/test/unit_test.hpp>

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