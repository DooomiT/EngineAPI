cmake_minimum_required(VERSION 3.13)
set(SWC "RunEngineApi")
target_include_directories(${SWC}
    ${PROJECT_ROOT}/source/inc/
)
target_link_libraries(${SWC}
    ${BOOST_LIBRARY}
)
# add_library(
    
# )
add_executable(SWC 
    ${CMAKE_CURRENT_LIST_DIR}
)