cmake_minimum_required(VERSION 3.11)

#find_package(protobuf REQUIRED)

file(GLOB SOURCES src/*.cc)
file(GLOB HEADERS include/*.h)

add_library(simhammer-core-lib ${SOURCES} ${HEADERS})
target_include_directories(simhammer-core-lib 
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")
#target_link_libraries(simhammer-core-lib PRIVATE protobuf::libprotobuf)
