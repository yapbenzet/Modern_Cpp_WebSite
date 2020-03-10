// Eigen.cpp : Defines the entry point for the console application.
//


#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
	Matrix4d m;
	m.resize(4, 4); // i�lem yap�lmaz
					// m.resize(5, 5); // hata verir
	cout << "m matrisinin boyutu: "
		<< m.rows() << "x" << m.cols() << std::endl;
	
    return 0;
}

