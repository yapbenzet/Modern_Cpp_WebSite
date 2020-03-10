// Eigen.cpp : Defines the entry point for the console application.
//

//
#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	MatrixXf matA(2, 2);
	matA << 1, 2, 3, 4;
	MatrixXf matB(4, 4);
	matB << matA, matA / 10, matA / 10, matA;
	std::cout << matB << std::endl;

	return 0;
}

