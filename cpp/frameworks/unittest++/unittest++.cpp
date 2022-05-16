#include <UnitTest++/UnitTest++.h>
#include "../../src/index.cpp"

TEST(HalfPlusOneTest_Positive) {
    CHECK_EQUAL(half_plus_one(1.0), 1.5);
    CHECK_EQUAL(half_plus_one(1.23456), 1.61728);
}

TEST(HalfPlusOneTest_Negative) {
    CHECK_EQUAL(half_plus_one(-1.0), 0.5);
    CHECK_EQUAL(half_plus_one(-1.23456), 0.38272);
}

int main(int, const char *[]) {
    return UnitTest::RunAllTests();
}

