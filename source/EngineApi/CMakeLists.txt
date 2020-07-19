cmake_minimum_required(VERSION 3.13)
set(SWC EngineApi)

add_executable(${SWC} src/EngineApi.cpp)

add_library(${SWC}Lib 
    ${CMAKE_CURRENT_LIST_DIR}/src/EngineApi.cpp
    ${PROJECT_ROOT}/source/Handler/ArduinoHandler/src/ArduinoHandler.cpp
)

target_include_directories(${SWC}
    PUBLIC
    ${PROJECT_ROOT}/source/EngineApi/inc/
    ${PROJECT_ROOT}/source/Handler/ArduinoHandler/inc
)

