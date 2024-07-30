cmake_minimum_required (VERSION 3.0)
 
project (learn_algorithm)

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
 
include_directories(${PROJECT_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(main ${SRC_LIST})