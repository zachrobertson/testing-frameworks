cmake_minimum_required(VERSION 3.10)
project(Google Test)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_Test_Compiler ${CMAKE_CXX_COMPILER})

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)

enable_testing()

add_executable(
    gtest-all
    google_test.cpp
)
target_link_libraries(
    gtest-all
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(
    gtest-all
)