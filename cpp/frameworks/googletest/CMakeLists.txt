set(This GoogleTest)

set(Sources
    googletest.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    TestingFrameworkComparison
)

add_test(
    NAME ${This}
    COMMAND ${This}
)