cmake_minimum_required(VERSION 3.22)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Node
        Node.cpp)
add_executable(First First.cpp)
add_executable(Last Last.cpp)