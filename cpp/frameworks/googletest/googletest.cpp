#include <gtest/gtest.h>
#include "../../src/index.cpp"

TEST(HalfPlusOneTest, PositiveFloat_1) {
    ASSERT_EQ(half_plus_one(1.0), 1.5);
}

TEST(HalfPlusOneTest, PositiveFloat_2) {
    ASSERT_EQ(half_plus_one(1.23456), 1.61728);
}

TEST(HalfPlusOneTest, NegativeFloat_1) {
    ASSERT_EQ(half_plus_one(-1.0), 0.5);
}

TEST(HalfPlusOneTest, NegativeFloat_2) {
    ASSERT_EQ(half_plus_one(-1.23456), 0.38272);
}
