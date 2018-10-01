cmake_minimum_required(VERSION 3.12)
project(manycpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(manycpp main.cpp random.cpp random.h super_math.cpp super_math.h)