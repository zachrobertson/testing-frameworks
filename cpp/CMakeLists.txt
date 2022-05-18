cmake_minimum_required(VERSION 3.16)
set(This TestingFrameworkComparison)
project(${This})


set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(src)

add_subdirectory(lib/googletest)
add_subdirectory(frameworks/googletest)

add_subdirectory(lib/unittest-cpp)
add_subdirectory(frameworks/unittest++)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)
add_subdirectory(frameworks/boost.test)

set(CMAKE_PREFIX_PATH lib/Catch2/install)
find_package(Catch2 3 REQUIRED)
add_subdirectory(frameworks/catch2)