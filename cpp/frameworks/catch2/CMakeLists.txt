set(This Catch2Test)

set(Sources
    catch2.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(
    ${This}
    Catch2::Catch2WithMain
    TestingFrameworkComparison
)

add_test(
    NAME ${This}
    COMMAND ${This}
)