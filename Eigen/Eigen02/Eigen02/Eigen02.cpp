#include "pch.h"
#include <iostream>
#include <Eigen/Dense>


using namespace Eigen;
using namespace std;

int main()
{
	Matrix<int, 4, 4> matris; //4x4luk tam sayi tutan matris

	matris << 1, 2, 3, 4, // matris tanimlama
		1, 2, 3, 4,
		1, 2, 3, 4,
		1, 2, 3, 4;

	Matrix<int, 4, 1> vektor; // 4 elemanli sutun vektoru

	vektor << 1, 2, 3, 4;

	Matrix<int, 4, 1> sonuc = matris * vektor; //Matris vektor carpimi

	//Carpim sonucu olusacak deger 4x1lik vektordur.

	cout << sonuc; //ekrana yazdirma

	/*Matrix<int, 5, 4> m;
	m.resize(4, 3);

	cout << "m matrisi boyutu: " << m.rows() << "x" << m.cols() << endl;
	cout << "Eleman sayisi: " << m.size() << endl;

		*/
	MatrixXf a(2, 2); a << 1, 2, 3, 4;
	MatrixXf b(3, 3);
	a = b;
	cout << "a matrisinin degerleri: " << a(1, 2) << " - cols =   " << a.cols() << endl; 


	cout << endl<<endl<<" a degeri = " << a(1, 2) << endl;



	Eigen::Matrix4f mat;
	mat << 1, 5, 9, 13,
		2, 6, 10, 14,
		3, 7, 11, 15,
		4, 8, 12, 16;
	mat.bottomRightCorner(2, 2) = mat.topLeftCorner(2, 2);
	cout << "Atama sonrasi, m = " << endl << mat << endl;


   //Matrix4d abc(10,15);

    MatrixXd a2(2, 2); a << 1, 2, 3, 4;
    MatrixXd b2(3, 3);
    a2 = b2;
    cout << "a2 matrisinin değerleri: " << a2(2,1) ;
    cout << " -  " << a2.cols() << endl;



    return 0;
}