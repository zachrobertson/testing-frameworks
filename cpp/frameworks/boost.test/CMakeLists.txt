cmake_minimum_required(VERSION 3.16)

set(This Boost.Test)

set(Sources
    boost.test.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(
    ${This}
    ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
    TestingFrameworkComparison
)

add_test(
    NAME ${This}
    COMMAND ${This}
)