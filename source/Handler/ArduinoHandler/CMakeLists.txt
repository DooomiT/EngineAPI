cmake_minimum_required(VERSION 3.13)
set(SWC ArduinoHandler)

add_library()(${SWC} 
    ${CMAKE_CURRENT_LIST_DIR}/src/ArduinoHandler.cpp
)

target_include_directories(${SWC}
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/inc
    ${CMAKE_CURRENT_LIST_DIR}/../inc
)
# target_link_libraries(${SWC}
#     ${BOOST_LIBRARY}
# )
# add_library(
    
# )