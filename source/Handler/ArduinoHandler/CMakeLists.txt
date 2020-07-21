cmake_minimum_required(VERSION 3.13)
set(SWC ArduinoHandler)

add_library(${SWC} OBJECT
    # ${CMAKE_CURRENT_LIST_DIR}/_src/ArduinoHandler.cpp
)

target_include_directories(${SWC}
    PUBLIC
    ${PROJECT_ROOT}/source/Handler/ArduinoHandler/_inc/
    ${PROJECT_ROOT}/source/Handler/_inc/
    ${PROJECT_ROOT}/source/EngineApi/_inc/
    ${PROJECT_ROOT}/source/_inc/
)
