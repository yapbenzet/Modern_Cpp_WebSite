<<<<<<< Updated upstream
cmake_minimum_required(VERSION 3.23)

project(modern_cpp_web_site)

set(CMAKE_CXX_STANDARD 20)


# add_executable(merhaba Giris/merhaba.cpp)

add_subdirectory(Giris)

add_subdirectory(Bit_operations)
=======
# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.
cmake_minimum_required(VERSION 3.16)
project(publicUyeler)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Liste)

#dd_subdirectory(Kalıtım/publicKalitim)
>>>>>>> Stashed changes
