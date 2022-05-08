# Overview

This is a repository for testing different unit testing frameworks in a few different languages. The point of this is to explore the difference between frameworks and what the use cases are for each.

## Environment

Just use a linux operating system, it is easier.

- g++ compiler
  - version: 7.5.0

## C++

C++ framework comparison.

Install the g++ compiler and gdb: `sudo apt install g++ build-esential gdb`

Here is a list of frameworks that are currently implemented:

1. Boost.Test
2. Google Test
3. Catch2

Other options:

- CppUnit
- UnitTest++

All of these need to be compatible with the Jenkins xunit plugin, [here](https://plugins.jenkins.io/xunit/) is a list of those frameworks.

### Boost.Test

Install the Boost.Test library: `sudo apt-get install libboost-test-dev`

There are 4 different variants that can be used:

- Static library variant
- Dynamic library variant
- single-header variant
- external test runner variant

Test runners:

- Static library variant:
  - supplies the `main()` function as part of the library. If you want to define
    your own `main()` function, you can do so by defining the flag `BOOST_TEST_NO_MAIN` during library compilation.
- Dynamic library variant (currently used):
  - The `main()` function can't reside in teh dynamic library body. Instead this
    variant supplies the `main()` function as part of the header `boost/test/unit_test.hpp` that will be generated as a part of the test file body. Only generated if `BOOST_TEST_MAIN` or `BOOST_TEST_MODULE` is defined during test compilation. For a single-file test module flags can be define either in a makefile or before the header `boost/test/unit_test.hpp` is included. For a multi-file test module the flags can't be defined in a makefile and have to be defined in only one for the test files to avoid duplicate copies of the `main()` function.
- Single-header variant:
  - This variant supplies the the `main()` function as part of the header `boost/test/unit_test.hpp` to be generated as part of the test file body. If this is undersired you can define the flag `BOOST_TEST_NO_MAIN` during compilation and the `main()` function will not be generated.

#### Boost.Test - Pros

#### Boost.Test - Con

- Only for unit testing, there may be other Boost modules for other types
    of testing
- Hard to use on Windows and Mac

### Google Test

This is probably the most widely used framework for C++ unit testing. This is a great advantage when it comes to long term support and troubleshooting help.

Here are the core tenets of the Google Test framework

1. Tests should be independent and repeatable. It’s a pain to debug a test that succeeds or fails as a result of other tests. googletest isolates the tests by running each of them on a different object. When a test fails, googletest allows you to run it in isolation for quick debugging.

2. Tests should be well organized and reflect the structure of the tested code. googletest groups related tests into test suites that can share data and subroutines. This common pattern is easy to recognize and makes tests easy to maintain. Such consistency is especially helpful when people switch projects and start to work on a new code base.

3. Tests should be portable and reusable. Google has a lot of code that is platform-neutral; its tests should also be platform-neutral. googletest works on different OSes, with different compilers, with or without exceptions, so googletest tests can work with a variety of configurations.

4. When tests fail, they should provide as much information about the problem as possible. googletest doesn’t stop at the first test failure. Instead, it only stops the current test and continues with the next. You can also set up tests that report non-fatal failures after which the current test continues. Thus, you can detect and fix multiple bugs in a single run-edit-compile cycle.

5. The testing framework should liberate test writers from housekeeping chores and let them focus on the test content. googletest automatically keeps track of all tests defined, and doesn’t require the user to enumerate them in order to run them.

6. Tests should be fast. With googletest, you can reuse shared resources across tests and pay for the set-up/tear-down only once, without making tests depend on each other.

#### Google Test - Pros

- Can be used for more than just unit testing
- Can be used on Windows, Linux and Max

#### Google Test - Cons

### Catch2 - v3

Used as a header only library (making it very small and lightweight) for v2 but for v3 they are moving to a statically compiled library

The documentation seems incomplete for v3 and it is not a good idea to use v2 if they are making breaking changes

#### Catch2 - Pros

- None right now

#### Catch2 - Cons

- Can only run using CMake
- Smaller community than Google Test and Boost.Test
