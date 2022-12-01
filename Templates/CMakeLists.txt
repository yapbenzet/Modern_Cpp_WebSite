# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.16)
project(Project)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(template1)
add_subdirectory(template2)
add_subdirectory(template3)
add_subdirectory(template4)
add_subdirectory(template_class_1)
add_subdirectory(template_class_2)
add_subdirectory(template_class_3)

