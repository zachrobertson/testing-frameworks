#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include "../../src/index.cpp"

TEST_CASE("HalfPlusOneTest", "[half_plus_one]") {
    REQUIRE(half_plus_one(0.0) == 1.0);
}