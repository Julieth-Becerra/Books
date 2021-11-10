cmake_minimum_required(VERSION 3.20)
project(Books)

set(CMAKE_CXX_STANDARD 14)

add_executable(Books main.cpp LinkedList.h Node.h LinkedList.cpp)
