cmake_minimum_required(VERSION 3.13)
set(SWC ArduinoHandler)

add_library(${SWC} STATIC
    ${CMAKE_CURRENT_LIST_DIR}/src/ArduinoHandler.cpp
    ${CMAKE_CURRENT_LIST_DIR}/inc/
    ${CMAKE_CURRENT_LIST_DIR}/../inc/
)
message(${CMAKE_CURRENT_LIST_DIR})
target_include_directories(${SWC}
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/inc/
    ${CMAKE_CURRENT_LIST_DIR}/../inc/
    ${CMAKE_CURRENT_LIST_DIR}/../../EngineApi/inc/
)
