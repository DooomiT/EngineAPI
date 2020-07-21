cmake_minimum_required(VERSION 3.13)
set(SWC RunEngineApi)

add_executable(${SWC} 
    ${CMAKE_CURRENT_LIST_DIR}/_src/RunEngineApi.cpp
)

target_include_directories(${SWC}
    PUBLIC
    ${PROJECT_ROOT}/source/EngineApi/_inc/
)
target_link_libraries(${SWC}
PUBLIC
    EngineApi
    ${BOOST_LIBRARY}
)

