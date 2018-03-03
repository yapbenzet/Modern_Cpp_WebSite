// Eigen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Eigen>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	Matrix4f m;
	m << 1, 2, 3, 4,
		5, 6, 7, 8,
		9, 10, 11, 12,
		13, 14, 15, 16;
	cout << m << endl;
	cout << "m.leftCols(2) =" << endl << m.leftCols(2) << endl << endl;
	cout << "m.bottomRows<2>() =" << endl << m.bottomRows<2>() << endl << endl;
	m.topLeftCorner(1, 3) = m.bottomRightCorner(3, 1).transpose();
	cout << "Atama sonrasi, m = " << endl << m << endl;

	cin.get();
	return 0;
}

