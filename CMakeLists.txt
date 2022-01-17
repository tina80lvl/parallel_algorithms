cmake_minimum_required(VERSION 3.21)
project(parallel_algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(parallel_algorithms main.cpp qsort_seq.cpp qsort_seq.h qsort.cpp qsort.h qsort_par.cpp qsort_par.h)
