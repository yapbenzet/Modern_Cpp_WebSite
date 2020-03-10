// reshape2.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <Eigen/Dense>


using namespace Eigen;

int main()
{

	MatrixXf M1(2, 6);    // Column-major storage
	M1 << 1, 2, 3, 4, 5, 6,
		7, 8, 9, 10, 11, 12;
	Map<MatrixXf> M2(M1.data(), 6, 2);
	std::cout << "M2:" << std::endl << M2 << std::endl;
    return 0;
}

