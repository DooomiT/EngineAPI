cmake_minimum_required(VERSION 3.13)
set(SWC RunEngineApi)

add_executable(${SWC} 
    ${CMAKE_CURRENT_LIST_DIR}/src/RunEngineApi.cpp
)

target_include_directories(${SWC}
    PUBLIC
    ${PROJECT_ROOT}/source/EngineApi/inc/
)
# target_link_libraries(${SWC}
#     ${BOOST_LIBRARY}
# )
# add_library(
    
# )
