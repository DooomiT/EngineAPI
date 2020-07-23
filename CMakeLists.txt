cmake_minimum_required(VERSION 3.18)
project(EngineApi VERSION 0.0.1 LANGUAGES CXX)

set(PROJECT_ROOT ${CMAKE_CURRENT_LIST_DIR})
set(CMAKE_CXX_STANDARD 17)

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
