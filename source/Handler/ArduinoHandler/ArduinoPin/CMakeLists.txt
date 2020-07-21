cmake_minimum_required(VERSION 3.13)
set(SWC ArduinoPin)

add_library(${SWC} STATIC
    ${CMAKE_CURRENT_LIST_DIR}/_src/ArduinoPin.cpp
    ${CMAKE_CURRENT_LIST_DIR}/_inc/
    ${CMAKE_CURRENT_LIST_DIR}/../_inc/
)
message(${CMAKE_CURRENT_LIST_DIR})
target_include_directories(${SWC}
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/_inc/
    ${CMAKE_CURRENT_LIST_DIR}/../_inc/
    ${CMAKE_CURRENT_LIST_DIR}/../../_inc/
)
