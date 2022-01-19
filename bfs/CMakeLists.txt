cmake_minimum_required(VERSION 3.21)
project(bfs)

set(CMAKE_CXX_STANDARD 14)

add_executable(bfs bfs_seq.cpp bfs_par.cpp bag.cpp)
