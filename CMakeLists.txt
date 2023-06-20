cmake_minimum_required(VERSION 3.25)
project(algo_simple_selection_sort C)

set(CMAKE_C_STANDARD 11)

add_executable(algo_simple_selection_sort
        main.c selection_sort.c selection_sort.h)
