cmake_minimum_required(VERSION 3.16)

set(This Catch2Test)

set(Sources
    catch2.cpp
)

add_executable(${This} ${Sources})

add_test(
    NAME ${This}
    COMMAND ${This}
)