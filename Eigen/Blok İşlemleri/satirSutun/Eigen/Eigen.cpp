// Eigen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Eigen>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	Eigen::MatrixXf m(3, 3);
	m << 1, 2, 3,
		4, 5, 6,
		7, 8, 9;
	cout << "m matrisi : " << endl << m << endl;
	cout << "2. satir: " << m.row(1) << endl;
	m.col(2) += 3 * m.col(0);
	cout << "Birinci sutunun uc katini ucuncu sutuna ekleyince, m matrisi:\n";
	cout << m << endl;

	return 0;
}

