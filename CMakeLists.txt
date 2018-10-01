cmake_minimum_required(VERSION 3.10)
project(Multi_Threaded_Sorting_Algorithms C)

set(CMAKE_C_STANDARD 99)

add_executable(Multi_Threaded_Sorting_Algorithms main.c utils.c utils.h sort.c sort.h)