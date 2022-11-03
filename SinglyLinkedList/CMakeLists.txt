cmake_minimum_required(VERSION 3.22)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Node
        Node.cpp)
add_executable(First First.cpp)
add_executable(Last Last.cpp)
add_executable(Position Position.cpp)
add_executable(Linkedlist Linkedlist.cpp)
add_executable(Reverse Reverse.cpp)
add_executable(Length Length.cpp)
add_executable(Array Array.cpp)
add_executable(Search Search.cpp)