// Eigen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Eigen>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	Eigen::MatrixXf m(4, 4);
	m << 1, 2, 3, 4,
		5, 6, 7, 8,
		9, 10, 11, 12,
		13, 14, 15, 16;
	cout << "Ortadaki blok" << endl;
	cout << m.block<2, 2>(1, 1) << endl << endl;
	for (int i = 1; i <= 3; ++i)
	{
		cout << "Blok boyutu: " << i << "x" << i << endl;
		cout << m.block(0, 0, i, i) << endl << endl;
	}
	
    return 0;
}

