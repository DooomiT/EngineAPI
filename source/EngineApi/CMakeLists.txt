cmake_minimum_required(VERSION 3.13)
set(SWC EngineApi)

# add_executable(${SWC} src/EngineApi.cpp)

add_library(${SWC} 
    ${CMAKE_CURRENT_LIST_DIR}/src/EngineApi.cpp
    ${PROJECT_ROOT}/source/Handler/ArduinoHandler/src/ArduinoHandler.cpp
    ${PROJECT_ROOT}/source/EngineApi/inc/
)

# target_include_directories(${SWC}
#     PUBLIC
#     ${PROJECT_ROOT}/source/EngineApi/inc/
# )

target_include_directories(${SWC}
    PUBLIC
    ${PROJECT_ROOT}/source/EngineApi/inc/
)

