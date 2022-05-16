cmake_minimum_required(VERSION 3.16)

set(This UnitTestPP)

set(Sources
    unittest++.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    UnitTest++
    TestingFrameworkComparison
)

add_test(
    NAME ${This}
    COMMAND ${This}
)