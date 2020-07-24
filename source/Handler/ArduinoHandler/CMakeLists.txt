cmake_minimum_required(VERSION 3.13)
set(SWC_NAME ArduinoHandler)

add_library(${SWC_NAME} OBJECT)

target_sources(${SWC_NAME}
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/_src/${SWC_NAME}.cpp
        ${CMAKE_CURRENT_LIST_DIR}/_inc/${SWC_NAME}.hpp
)

target_include_directories(${SWC_NAME}
    PUBLIC
    ${PROJECT_ROOT}/source/_inc/
    ${PROJECT_ROOT}/source/Logger/_inc/
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/_inc
    ${CMAKE_CURRENT_LIST_DIR}/../_inc/
)
