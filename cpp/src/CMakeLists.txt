cmake_minimum_required(VERSION 3.16)
set(This TestingFrameworkComparison)

enable_testing()

set(Sources
    index.cpp
)

add_library(${This} STATIC ${Sources})
