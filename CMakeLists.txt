cmake_minimum_required(VERSION 3.25)
project(untitled11)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled11 main.cpp include/food.h include/snake.h src/food.cpp src/snake.cpp)
