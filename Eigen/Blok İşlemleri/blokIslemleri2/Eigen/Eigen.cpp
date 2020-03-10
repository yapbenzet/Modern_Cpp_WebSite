// Eigen.cpp : Defines the entry point for the console application.
//


#include <Eigen/Dense>
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


    Eigen::MatrixXd m2(4, 4);
    m2 <<   1,  2,   3,   4,
            5,  6,   7,   8,
            9, 10, 11, 12,
            13,14, 15,  16;
    cout << "Ortadaki blok" << endl;
    cout << m2.block(1, 1,3, 1) << endl << endl;



    cout << "m.leftCols(1) =" << endl << m2.rightCols(2) << endl << endl;
    m2.bottomLeftCorner(2, 2) = m2.topRightCorner(2, 2);
    cout << "Atama sonrasi, m2 = " << endl << m2 << endl;




    return 0;
}

