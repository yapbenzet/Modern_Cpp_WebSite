// RobotlarIcinMatematikEigen1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Eigen>

using namespace Eigen;

int main()
{
	Eigen::Matrix<int, 3, 2> mat1;


	//Atama iþlemleri

	/*Eigen::Matrix2i a ; //2 x 2 'lik integer kare matris  2->2x2  i->integer.

	//a = [1 2 3 4];  yanlýþ atama þekli
	//a = [1, 2 : 3, 4];

	a << 1, 2,// atama iþlemi operator<< ile yapýlabilir.(Virgül ile atama)
		 3, 4;
	//veya tek tek indislere deðer verilir.
	a(0, 0) = 1;
	a(0, 1) = 2;
	a(1, 0) = 3;
	a(1, 1) = a(0, 0) + a(1, 0);

	std::cout << "a matrisi: " << std::endl << a << std::endl << std::endl;
	std::cout << "a matrisi 1. sutun 1. satir degeri: "  << a(1, 1) << std::endl << std::endl;

	Eigen::RowVector3d vec1; //  3 elemanlý double satýr vektörü 3->3 eleman d->double

	//vec1 << 0.5, 1.3; Boyutu derlenme zamanýnda belirlenmiþ matris ve vektörlere virgül ile atama yapýlacaksa
	//vec1(2) = 3.2;   tüm elemanlara deðer verilmesi gerekmektedir.

	vec1 << 0.5, 1.3, 3.2;

	//veya

	//vec1(0, 0) = 0.5; typedef tanýmlý vektör için yanlýþ atama þekli
	//vec1(0, 1) = 1.3;
	//vec1(0, 2) = 3.2;

	vec1(0) = 0.5;
	vec1(1) = 1.3;
	vec1(2) = 3.2;

	std::cout << "vec1 satir vektoru: " << std::endl << vec1 << std::endl << std::endl;

	Eigen::MatrixXi b(5,3); // 5 satýr 3 sütunluk integer matris

	for (int i = 0; i < b.rows(); ++i)//b.rows() -> b matrisinin satýr sayýsý
		for (int j = 0; j < b.cols(); ++j)//b.cols() -> b matrisinin sütun sayýsý
			b(i, j) = j + i*b.cols();

	std::cout << "b matrisi: " << std::endl << b << std::endl << std::endl;

	Eigen::Matrix<int, Eigen::Dynamic, Eigen::Dynamic> x;
	x << 0, 1, 2, 3;
	std::cout << x;
	*/

	Matrix<double, Dynamic, Dynamic> m;//Boyutu derlenme sýrasýnda belirlenmemiþ double matris

	//m << 0.0, 1.1, 2.2,// Matrisin boyutu henüz belli olmadýðý için 
	//	   3.3, 4.4, 5.5;// girilen deðerlerin anlamý yoktur.
	
	Matrix<double, Dynamic, Dynamic,RowMajor> a(2, 3);//2 satýr 3 sütundan oluþan double matris
	a << 0.0, 1.1, 2.2, 
   	     3.3, 4.4, 5.5;
	//veya 
	std::cout << *(a.data()+1);
	MatrixXd b(2, 3);//MatrixXd --> X = Dynamic , d = double
	//b << 0.0, 1.1, 2.2, Eleman sayýsýndan fazla eleman girilmiþ, hata verir.
	//	   3.3, 4.4, 5.5,
	// 	   6.6, 7.7, 8.8;

	//Blok iþlemleri

    return 0;
}

