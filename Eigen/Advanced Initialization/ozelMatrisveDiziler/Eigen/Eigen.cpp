// Eigen.cpp : Defines the entry point for the console application.
//

//
#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	cout << "Sabit boyutlu dizi:\n";
	Array33f a1 = Array33f::Zero();
	cout << a1 << "\n\n";
	cout << "Dinamik tek boyutlu dizi:\n";
	ArrayXf a2 = ArrayXf::Zero(3);
	cout << a2 << "\n\n";
	cout << "Dinamik iki boyutlu dizi:\n";
	ArrayXXf a3 = ArrayXXf::Zero(3, 4);
	cout << a3 << "\n";

	return 0;
}

