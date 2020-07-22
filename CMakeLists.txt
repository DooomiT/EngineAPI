cmake_minimum_required(VERSION 3.13)
project(EngineApi VERSION 0.0.1 LANGUAGES CXX)

set(PROJECT_ROOT ${CMAKE_CURRENT_LIST_DIR})
set(CMAKE_CXX_STANDARD 11)
find_package(Boost 1.65)
message(STATUS "Boost version: ${Boost_VERSION}")
add_subdirectory(source)

# Testing
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
endif()

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()

# TODO: Fix crtdbg missing (googletest)
# option(PACKAGE_TESTS "Build the tests" ON)
# if(PACKAGE_TESTS)
#     enable_testing()
#     include(GoogleTest)
#     add_subdirectory("${PROJECT_ROOT}/lib/extern/googletest" "extern/googletest")
# endif()
