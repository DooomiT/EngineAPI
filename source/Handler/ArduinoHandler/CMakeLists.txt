cmake_minimum_required(VERSION 3.13)
set(SWC_NAME ArduinoHandler)

add_library(${SWC_NAME} OBJECT)

target_sources(${SWC_NAME}
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/_src/${SWC_NAME}.cpp
)

target_include_directories(${SWC_NAME}
    PUBLIC
    ${PROJECT_ROOT}/source/_inc/
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/_incß
    ${CMAKE_CURRENT_LIST_DIR}/../_inc/
)
