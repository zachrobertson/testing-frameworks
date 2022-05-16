#include <gtest/gtest.h>
#include "../../src/index.cpp"

TEST(HalfPlusOneTest, PositiveFloat) {
    ASSERT_EQ(half_plus_one(1.0), 1.5);
    ASSERT_EQ(half_plus_one(1.23456), 1.61728);
}

TEST(HalfPlusOneTest, NegativeFloat) {
    ASSERT_EQ(half_plus_one(-1.0), 0.5);
    ASSERT_EQ(half_plus_one(-1.23456), 0.38272);
}
