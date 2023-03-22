cmake_minimum_required (VERSION 3.2)

project (modern_cpp)


find_package (Eigen3 3 REQUIRED NO_MODULE)


add_executable(Aliasin1 Aliasing/Aliasing1/10A2/10A2.cpp)
target_link_libraries (Aliasin1 Eigen3::Eigen)

add_executable(Aliasin2 Aliasing/Aliasing2/10A2/10A2.cpp)
target_link_libraries (Aliasin2 Eigen3::Eigen)

add_executable(Aliasin3 Aliasing/Aliasing3/11A2/11A2.cpp)
target_link_libraries (Aliasin3 Eigen3::Eigen)

add_executable(Aliasin4 Aliasing/Aliasing4/11A2/11A2.cpp)
target_link_libraries (Aliasin4 Eigen3::Eigen)

add_executable(Aliasin5 Aliasing/Aliasing5/11A2/11A2.cpp)
target_link_libraries (Aliasin5 Eigen3::Eigen)

add_executable(Aliasin6 Aliasing/Aliasing6/11A2/11A2.cpp)
target_link_libraries (Aliasin6 Eigen3::Eigen)

add_executable(Eigen02 Eigen02/Eigen02/Eigen02.cpp)
target_link_libraries (Eigen02 Eigen3::Eigen)

add_executable(commaInitializer  Advanced\ Initialization/commaInitializer/Eigen/Eigen.cpp)
target_link_libraries (commaInitializer Eigen3::Eigen)

add_executable(commaInitializer2  Advanced\ Initialization/commaInitializer2/Eigen/Eigen.cpp)
target_link_libraries (commaInitializer2 Eigen3::Eigen)

add_executable(commaInitializer3  Advanced\ Initialization/commaInitializer3/Eigen/Eigen.cpp)
target_link_libraries (commaInitializer3 Eigen3::Eigen)


add_executable(ozelMatrisveDiziler  Advanced\ Initialization/ozelMatrisveDiziler/Eigen/Eigen.cpp)
target_link_libraries (ozelMatrisveDiziler Eigen3::Eigen)

add_executable(ozelMatrisveDiziler2  Advanced\ Initialization/ozelMatrisveDiziler2/Eigen/Eigen.cpp)
target_link_libraries (ozelMatrisveDiziler2 Eigen3::Eigen)

add_executable(Blok_islemleri1 Blok\ İşlemleri/blokIslemleri/Eigen/Eigen.cpp)
target_link_libraries (Blok_islemleri1 Eigen3::Eigen)

add_executable(Blok_islemleri2 Blok\ İşlemleri/blokIslemleri2/Eigen/Eigen.cpp)
target_link_libraries (Blok_islemleri2 Eigen3::Eigen)

add_executable(atamaVeResize Matrix\ Sınıfı/atamaVeResize/Eigen/Eigen.cpp)
target_link_libraries (atamaVeResize Eigen3::Eigen)

add_executable(elemanErisimi Matrix\ Sınıfı/elemanErisimi/Eigen/Eigen.cpp)
target_link_libraries (elemanErisimi Eigen3::Eigen)

add_executable(resize Matrix\ Sınıfı/resize/Eigen/Eigen.cpp)
target_link_libraries (resize Eigen3::Eigen)

add_executable(resize2 Matrix\ Sınıfı/resize2/Eigen/Eigen.cpp)
target_link_libraries (resize2 Eigen3::Eigen)

add_executable(RobotlarIcinMatematikEigen1 Matrix\ Sınıfı/RobotlarIcinMatematikEigen1/RobotlarIcinMatematikEigen1/RobotlarIcinMatematikEigen1.cpp)
target_link_libraries (RobotlarIcinMatematikEigen1 Eigen3::Eigen)

