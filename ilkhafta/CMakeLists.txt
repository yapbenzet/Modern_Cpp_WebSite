cmake_minimum_required(VERSION 3.16)


project(sinif_ornegi)

add_library(sinif sinif.cpp)
#target_link_libraries( )
add_executable(projemiz sinif1.cpp sinif )

add_executable(Hello_World hello_world.cpp)