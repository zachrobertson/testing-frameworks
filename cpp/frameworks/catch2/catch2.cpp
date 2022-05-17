#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../../src/index.cpp"

TEST_CASE("HalfPlusOne", "[half_plus_one]"){
    SECTION( "Positive Inputs" ){
        REQUIRE( half_plus_one(1.0) == 1.5 );
        REQUIRE( half_plus_one(1.23456) == 1.61728 );
    }
    SECTION( "Negative Inputs" ){
        REQUIRE( half_plus_one(-1.0) == 0.5 );
        REQUIRE( half_plus_one(-1.23456) == 0.38272 );
    }
}