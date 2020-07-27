cmake_minimum_required(VERSION 3.13)
set(SWC_NAME Logger)

add_library(${SWC_NAME} OBJECT)

target_sources(${SWC_NAME}
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/_src/Logger.cpp
        ${CMAKE_CURRENT_LIST_DIR}/_inc/Logger.hpp
)

target_include_directories(${SWC_NAME}
    PUBLIC
        ${PROJECT_ROOT}/source/EngineApi/_inc/
        ${PROJECT_ROOT}/source/_inc/
        ${CMAKE_CURRENT_LIST_DIR}/_inc       
)


