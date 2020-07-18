cmake_minimum_required(VERSION 3.17)
project(EngineApi VERSION 0.0.1 LANGUAGE CXX)

set(PROJECT_ROOT ${CMAKE_CURRENT_LIST_DIR})
find_package(Boost 1.65)
message(STATUS "Boost version: ${Boost_VERSION}")
add_subdirectory(source)