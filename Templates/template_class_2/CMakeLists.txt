cmake_minimum_required(VERSION 3.8)
project(template_class_2)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Dizi.h templates.cpp Dizi.cpp)
add_executable(template_class_2 ${SOURCE_FILES})