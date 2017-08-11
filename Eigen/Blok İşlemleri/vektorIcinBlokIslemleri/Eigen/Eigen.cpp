// Eigen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Eigen>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	Eigen::ArrayXf v(6);
	v << 1, 2, 3, 4, 5, 6;
	cout << "v.head(3) =" << endl << v.head(3) << endl << endl;
	cout << "v.tail<3>() = " << endl << v.tail<3>() << endl << endl;
	v.segment(1, 4) *= 2;
	cout << "after 'v.segment(1,4) *= 2', v =" << endl << v << endl;

	return 0;
}

