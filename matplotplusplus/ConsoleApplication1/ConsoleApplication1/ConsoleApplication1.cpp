// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <Eigen/Dense>

using namespace std;

int main()
{

	/*
	Eigen::MatrixXf b;

	Eigen::MatrixXd matris3 = Eigen::MatrixXd::Random(10, 10);

	std::cout << " matris3 =\n  " << matris3 << "\n\n\n";

	Eigen::Matrix<float, 10, 1> matris5 = Eigen::VectorXf::Random(10, 1) * 10;
	int indis;
	//matris5.maxCoeff(&indis);
	//matris5(indis) = 0;

	Eigen::Matrix4f m;
	m << 1, 5, 9, 13,
		2, 6, 10, 14,
		3, 7, 11, 15,
		4, 8, 12, 16;
	cout << " m matrix \n" << m << endl;
	cout << m.sum() << endl;
	cout << m.maxCoeff() << endl;
	cout << m.col(2).transpose() << endl;
	
	cout << " m row 1 \n " << m.row(1).diagonal();


//	Eigen::Matrix4i mat = Eigen::Matrix4i::Random(4) * 100;

//	std::cout << mat << " \n\n\n";

	Eigen::MatrixXd matrix1 = Eigen::MatrixXd::Random(5, 8) * 100;

	std::cout << matrix1 << " \n\n\n";


	Eigen::Matrix<double, -1, -1> mat1 = Eigen::Matrix4d::Random(4,4);
	mat1.resize(5, 5);


	std::cout << mat1 << " \n\n\n";
	*/

	
	Eigen::Matrix<float, 10, 1> matris5 = Eigen::VectorXf::Random(10, 1) * 10;
	std::cout << " matris 5 \n " << matris5 << std::endl;
	int indis;
	matris5.maxCoeff(&indis);
	matris5(indis) = 0;
	
	std::cout << " matris 5 \n " << matris5 << std::endl;





	return 0;
}