cmake_minimum_required(VERSION 3.10)
set(This TestingFrameworkComparison)

enable_testing()

set(Sources
    index.cpp
)

add_library(${This} STATIC ${Sources})
