#include "pch.h"
#include <iostream>
#include <Eigen/Dense>


using namespace Eigen;
using namespace std;

int main()
{


	//Matrix<int, 5, 4> m;
	////m.resize(4, 3);

	//cout << "m matrisinin deðerleri: " << m(4, 3) << " - cols =   " << m.cols() << endl;


	//cout << "m matrisi boyutu: " << m.rows() << "x" << m.cols() << endl;
	//cout << "Eleman sayisi: " << m.size() << endl;

	//1 2
	//3 4
	//a(1,2) --> 1. satýr 2. sütun yanlýþ
	//a(1,2) --> 2. satýr 3. sütun doðru
	//tanýmlanan a matrisinde 2. satýr var fakat 3. sütun yok.
	//ekrana ne yazar? hata mý verir? 
	//compile time error --> derleme zamaný hatasý
	//run time error --> çalýþma zamaný hatasý


	//MatrixXf a(2, 2); a << 1, 2, 3, 4;
	//MatrixXf b(3, 3);
	//a = b;
	//cout << "a matrisinin deðerleri: " << a(1, 2) << " - cols =   " << a.cols() << endl; 


	//cout << endl<<endl<<" a deðeri = " << a(1, 2) << endl;


	//MatrixXf c(2, 2);
	//cout << "c matrisinin boyutu: " << c.rows() << "x" << c.cols() << endl;
	//MatrixXf d(3, 3);
	//c = d;
	//d(0, 0) = 15; 
	//cout << " c matrisinin 0,0 degeri = " << c(0, 0) << endl;
	//cout << "c matrisinin yeni boyutu: " << c.rows() << "x" << c.cols() << endl;


	//Eigen::Matrix4f mat;
	//mat << 1, 5, 9, 13,
	//	   2, 6, 10, 14,
	//	   3, 7, 11, 15,
	//	   4, 8, 12, 16;

	//	cout << "Ortadaki blok" << endl;
	//	cout << mat.block<2, 2>(0, 1) << endl << endl;
	//	for (int i = 1; i <= 3; ++i)
	//	{
	//		cout << "Blok boyutu: " << i << "x" << i << endl;
	//		cout << mat.block(0, 0, i, i) << endl << endl;
	//	}


	//mat.bottomRightCorner(2, 2) = mat.topLeftCorner(2, 2);
	//cout << "Atama sonrasi, m = " << endl << mat << endl;

	//MatrixXd a2(2, 2); a2 << 1, 2, 3, 4;
	//MatrixXd b2(3, 3);
	//a2 = b2;
	//cout << "a matrisinin deðerleri: " << a2(2, 1) << " -  " << a2.cols() << endl;


	//Eigen::MatrixXd m(4, 4);
	//m << 1, 2, 3, 4,
	//	5, 6, 7, 8,
	//	9, 10, 11, 12,
	//	13, 14, 15, 16;
	//cout << "Ortadaki blok" << endl;
	//cout << m.block<1, 1>(3, 1) << endl << endl;


	//Eigen::Matrix4i m;
	//m << 1, 5, 9, 13,
	//	2, 6, 10, 14,
	//	3, 7, 11, 15,
	//	4, 8, 12, 16;
	//cout << "m.leftCols(1) =" << endl << m.leftCols(2) << endl << endl;
	//cout << "m.topLeftCorner(1, 3)" << m.topLeftCorner(1, 3) << endl;

	//cout << "m.bottomRightCorner(3, 1)" << m.bottomRightCorner(3, 1) << endl;

	//m.topLeftCorner(1, 3) = m.bottomRightCorner(3, 1);

	//cout << "Atama sonrasi, m = " << endl << m << endl;


	//Eigen::Matrix4i B;
	//B << 1, 5, 9, 13,
	//	2, 6, 10, 14,
	//	3, 7, 11, 15,
	//	4, 8, 12, 16;

	//cout << "b.array = " << B.array() + 4 << endl;

	//B.array() += 4;



	//cout<<B.row(0)<<endl;
	//cout<<B.col(2)<<endl;

	//Eigen::Matrix4i C; 
	//C = B.row(0).transpose();
	//C = B.col(2);


//Eigen::MatrixXd m(4, 4);
//m << 1, 2, 3, 4,
//5, 6, 7, 8,
//9, 10, 11, 12,
//13, 14, 15, 16;
//cout << "Ortadaki blok" << endl;
//cout << m.block(1, 1, 3, 1) << endl << endl;

Eigen::Matrix4i m;
m << 1, 5, 9, 13,
2, 6, 10, 14,
3, 7, 11, 15,
4, 8, 12, 16;
cout << "m.rightCols(2) =" << endl << m.rightCols(2) << endl << endl;
m.bottomLeftCorner(2, 2) = m.topRightCorner(2, 2);
cout << "Atama sonrasi, m = " << endl << m << endl;


	return 0;
}