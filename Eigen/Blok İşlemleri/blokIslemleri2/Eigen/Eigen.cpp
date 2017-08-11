// Eigen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Eigen>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	Array22f m;
	m << 1, 2,
		3, 4;
	Array44f a = Array44f::Constant(0.6);
	cout << "a dizisi: " << endl << a << endl << endl;
	a.block<2, 2>(1, 1) = m;
	cout << "m, merkez 2x2 bloguna kopyalandiginda a:" << endl << a << endl << endl;
	a.block(0, 0, 2, 3) = a.block(2, 1, 2, 3);
	cout << "Sag-alt 2x3 blogu sol-ust 2x2 bloguna kopyalandgiginda a:" << endl << a << endl << endl;

	return 0;
}

