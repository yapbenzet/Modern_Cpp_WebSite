// Eigen.cpp : Defines the entry point for the console application.
//

#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	const int size = 6;
	MatrixXd mat1(size, size);
	mat1.topLeftCorner(size / 2, size / 2) = MatrixXd::Zero(size / 2, size / 2);
	mat1.topRightCorner(size / 2, size / 2) = MatrixXd::Identity(size / 2, size / 2);
	mat1.bottomLeftCorner(size / 2, size / 2) = MatrixXd::Identity(size / 2, size / 2);
	mat1.bottomRightCorner(size / 2, size / 2) = MatrixXd::Zero(size / 2, size / 2);
	cout << mat1 << endl << endl;
	MatrixXd mat2(size, size);
	mat2.topLeftCorner(size / 2, size / 2).setZero();
	mat2.topRightCorner(size / 2, size / 2).setIdentity();
	mat2.bottomLeftCorner(size / 2, size / 2).setIdentity();
	mat2.bottomRightCorner(size / 2, size / 2).setZero();
	cout << mat2 << endl << endl;
	MatrixXd mat3(size, size);
	mat3 << MatrixXd::Zero(size / 2, size / 2), MatrixXd::Identity(size / 2, size / 2),
		MatrixXd::Identity(size / 2, size / 2), MatrixXd::Zero(size / 2, size / 2);
	cout << mat3 << endl;


	return 0;
}

