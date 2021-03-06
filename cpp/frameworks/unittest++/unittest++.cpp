#include <UnitTest++/UnitTest++.h>
#include "../../src/index.cpp"

TEST(HalfPlusOneTest_Positive_1) {
    CHECK_EQUAL(half_plus_one(1.0), 1.5);
}

TEST(HalfPlusOneTest_Positive_2) {
    CHECK_EQUAL(half_plus_one(1.23456), 1.61728);
}

TEST(HalfPlusOneTest_Negative_1) {
    CHECK_EQUAL(half_plus_one(-1.0), 0.5);
}

TEST(HalfPlusOneTest_Negative_2) {
    CHECK_EQUAL(half_plus_one(-1.23456), 0.38272);
}

int main(int, const char *[]) {
    return UnitTest::RunAllTests();
}

