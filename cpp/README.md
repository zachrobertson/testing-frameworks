# C++ Unit Testing Framework Comparison

This is a repository for testing different unit testing frameworks in a few different languages. The point of this is to explore the difference between frameworks and what the use cases are for each.

## Environment

Just use a linux operating system, it is easier.

- Dependencies:
    - g++ compiler
        - version: 7.5.0
    - cmake
        - version: 3.16.x

- Installing libraries:
    - `sudo apt install libboost-test-dev`
    - In the `cpp/lib` directory:
        - `git clone https://github.com/google/googletest.git`
        - `git clone https://github.com/unittest-cpp/unittest-cpp.git`
        - `git clone https://github.com/catchorg/Catch2.git`
        - In the `Catch2` directory:
            - `cmake -DCMAKE_INSTALL_PREFIX=./install -Bbuild -H. -DBUILD_TESTING=OFF`
            - `cmake --build build/ --target install`

## Boost.Test

Boost.Test is a very popular testing framework part of the [Boost](https://www.boost.org/) library. The main advantage of using Boost is the wide support and Boost's compatability with many platforms and C++ versions.

Boost is not open-source but is peer-reviewed and the source is available on [GitHub](https://github.com/boostorg/test)

### Boost.Test - Pros

- Robust set of testing macros
- Jenkins support out of the box
- Support for a number of C++ versions and operating systems

### Boost.Test - Con

- Only for unit testing, there may be other Boost modules for other types
    of testing
- Not open-source
- Specific Boost license (shouldn't be an issue but it is something to keep in mind)
- Difficult to built from source

## Google Test

This is probably the most widely used framework for C++ unit testing, and can be used for more than just unit testing. it is maintained by Google but is an open-source project and has really great documentation. Like Boost is also has compatibility with a good number of C++ versions and operating systems. If the project you are testing is using CMake then Google Test is a great option because of the Google Test specific CMake functionality built into CMake.

### Google Test - Pros

- Can be used for more than just unit testing
- Can be used on Windows, Linux and Max
- CMake integrations
- Easy to build from source
- Jenkins support out of the box

### Google Test - Cons

- Large library that could introduced unnecessary dependencies if not all features are being used

## Catch2(v2)

Used as a header only library (making it very small and lightweight) but lacking some of the more advanced features of Google Test and Boost.Test.

### Catch2(v2) - Pros

- Very simple to include
- No extra dependencies

### Catch2(v2) - Cons

- **v2 is currently being deprecated as they move to v3 so making a new project with this dependency is not a good idea**
- Smaller community than Google Test and Boost.Test

## Catch2(v3)

Newest version of Catch2 that is still under development, it can be found on the [devel](https://github.com/catchorg/Catch2/tree/devel) branch. The main difference between Catch2(v2) and Catch2(v3) is the transition away from the single header library paradigm. This means that to use Catch2(v3) we need to download the whole project and link it using CMake, luckily there is good documentation on how to integrate it with CMake and building the library from GitHub (to avoid using a package manager like `apt`).

### Catch2(v3) - Pros

- Easy to use and build
- Open-source

### Catch2(v3) - Cons

- **This version is still under development and could introduce breaking changes so it should not be adopted for new projects**
- Increased complexity to include in project compared to v2 and still lacks features that Google Test and Boost.Test have

## UnitTest++

UnitTest++ is a very lightweight test framework that only supplies the most basic test functionality. This is provided to show the oppsite end of the libraries like Google Test and Boost.Test that have a very big set of features but in return are very large and can be slow to build and compile.

In hindsight this is not a good choice as it might not be under maintaienance anymore after `November, 2020` and it not really supported by Jenkins as it doesn't produce an XML output.
Some better options might be 
## Jenkins

For the project this comparison was initially used for we are targeting Jenkins for the CI/CD pipeline and as such we wanted a comparison of how the different frameworks interact with Jenkins.

The file `cpp/Jenkinsfile` is used to define the Jenkins pipeline which will build and run all of the test executables made with the libraries listed above. UnitTest++ cannot produce an xml output so it does not have an jUnit integration for test result visualizations and logging.
