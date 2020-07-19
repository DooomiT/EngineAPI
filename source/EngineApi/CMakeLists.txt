cmake_minimum_required(VERSION 3.13)
set(SWC EngineApi)

add_executable(${SWC} src/EngineApi.cpp)

# add_library(${SWC} STATIC

# )

target_include_directories(${SWC}
    PUBLIC
    ${PROJECT_ROOT}/source/EngineApi/inc/
)

