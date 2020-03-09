// Eigen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	MatrixXd m(2, 5);
	m.resize(4, 3);
	cout << "m matrisi boyutu: "
		<< m.rows() << "x" << m.cols() << endl;
	cout << "Eleman sayisi: " << m.size() << endl;
	VectorXd v(2);
	v.resize(5);
	cout << "v vektoru boyutu : " << v.size() << endl;
	cout << "Matris olarak, v'nin boyutu: " << v.rows() << "x" << v.cols() << endl;
	
    return 0;
}

