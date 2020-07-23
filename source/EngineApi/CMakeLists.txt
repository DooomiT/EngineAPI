cmake_minimum_required(VERSION 3.13)
set(SWC_NAME EngineApi)

# add_executable(${SWC} _src/EngineApi.cpp)

add_library(${SWC_NAME} STATIC
    $<TARGET_OBJECTS:ArduinoHandler>
    $<TARGET_OBJECTS:Logger>
)
target_sources(${SWC_NAME}
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/_src/EngineApi.cpp
)


target_include_directories(${SWC_NAME}
    PUBLIC
        ${PROJECT_ROOT}/source/Handler/ArduinoHandler/_inc
        ${PROJECT_ROOT}/source/_inc
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/_inc
)

set_target_properties(
    ${SWC_NAME}
    PROPERTIES PUBLIC_HEADER
    "_inc/EngineApi.hpp;../_inc/EngineApiDatatypes.hpp;_inc/IEngineApi.hpp"
)

install ( TARGETS ${SWC_NAME}
    ARCHIVE DESTINATION /app/ PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE
    PUBLIC_HEADER DESTINATION delivery/
)

