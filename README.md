# Overview

This is a repository for testing different unit testing frameworks in a few different languages. The point of this is to explore the differenece between frameworks and what the use cases are for each.

## Environment

Just use a linux operating system, it is easier.

- g++ compiler
    - version: 7.5.0

## C++

C++ framework comparison.

Install the g++ compiler and gdb:
  - `sudo apt install g++ build-esential gdb`

### Boost.Test

Install the Boost.Test library:
  - `sudo apt-get install libboost-test-dev`

There are three different ways to use the Boost.Test library:
  1. Header-only version
  2. Static linked version
  3. Dynamic linked version