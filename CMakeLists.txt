cmake_minimum_required(VERSION 3.13)
project(EngineApi VERSION 0.0.1 LANGUAGES CXX)

set(PROJECT_ROOT ${CMAKE_CURRENT_LIST_DIR})
set(CMAKE_CXX_STANDARD 14)

find_package(Boost 1.65)
message(STATUS "Boost version: ${Boost_VERSION}")
add_subdirectory(source)