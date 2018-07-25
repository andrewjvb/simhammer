cmake_minimum_required(VERSION 3.11)

find_package(protobuf REQUIRED)

add_library(simhammer-core-lib src/*.cc include/*.h)
target_include_directories(simhammer-core-lib include)
target_link_libraries(simhammer-core-lib PRIVATE protobuf::libprotobuf)
