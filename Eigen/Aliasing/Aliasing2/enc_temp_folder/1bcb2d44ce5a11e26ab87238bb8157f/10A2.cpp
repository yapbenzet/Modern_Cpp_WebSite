 //Visual Studio icin.
#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main()
{
	Matrix2i a; a << 1, 2, 3, 4;
	cout << "Here is the matrix a:\n" << a << endl;
	a = a.transpose(); // !!! HATA !!!
	cout << "and the result of the aliasing effect:\n" << a << endl;
	/*
		1 2		->		1 2
		3 4
	*/
	cin.get();
}