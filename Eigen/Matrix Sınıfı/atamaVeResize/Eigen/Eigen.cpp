// Eigen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Eigen>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	MatrixXf a(2, 2);
	cout << "a matrisinin boyutu: " << a.rows() << "x" << a.cols() << endl;
	MatrixXf b(3, 3);
	a = b;
	cout << "a matrisinin yeni boyutu: " << a.rows() << "x" << a.cols() << endl;
	
    return 0;
}

