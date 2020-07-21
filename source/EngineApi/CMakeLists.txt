cmake_minimum_required(VERSION 3.13)
set(SWC EngineApi)

# add_executable(${SWC} _src/EngineApi.cpp)

add_library(${SWC} 
    ${CMAKE_CURRENT_LIST_DIR}/_src/EngineApi.cpp
    ${PROJECT_ROOT}/source/Handler/ArduinoHandler/_src/ArduinoHandler.cpp
    ${PROJECT_ROOT}/source/EngineApi/_inc/
    ${PROJECT_ROOT}/source/_inc/
)

# target_include_directories(${SWC}
#     PUBLIC
#     ${PROJECT_ROOT}/source/EngineApi/_inc/
# )

target_include_directories(${SWC}
    PUBLIC
    ${PROJECT_ROOT}/source/Handler/ArduinoHandler/_inc/
    ${PROJECT_ROOT}/source/EngineApi/_inc/
    ${PROJECT_ROOT}/source/_inc/
)

