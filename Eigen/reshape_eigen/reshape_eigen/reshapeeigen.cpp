// reshapeeigen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Eigen>
#include <iostream>
using namespace Eigen;

int main()
{
	MatrixXf M1(3, 3);    // Column-major storage
	M1 << 1, 2, 3,
		4, 5, 6,
		7, 8, 9;
	Map<RowVectorXf> v1(M1.data(), M1.size());
	std::cout << "v1:" << std::endl << v1 << std::endl;
	Matrix<float, Dynamic, Dynamic, RowMajor> M2(M1);
	Map<RowVectorXf> v2(M2.data(), M2.size());
	std::cout << "v2:" << std::endl << v2 << std::endl;
    return 0;
}

