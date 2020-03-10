// RobotlarIcinMatematikEigen1.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main()
{
	Matrix<int, 3, 3> mat1;
	
	Matrix3i mat2;

	//Atama i�lemleri

	Eigen::Matrix2i a ; //2 x 2 'lik integer kare matris  2->2x2  i->integer.

	//a = [1 2 3 4];  yanl�� atama �ekli
	//a = [1, 2 : 3, 4];

	a << 1, 2,// atama i�lemi operator<< ile yap�labilir.(Virg�l ile atama)
		 3, 4;
	//veya tek tek indislere de�er verilir.
	a(0, 0) = 1;
	a(0, 1) = 2;
	a(1, 0) = 3;
	a(1, 1) = a(0, 0) + a(1, 0);
	
	std::cout << "a matrisi: " << std::endl << a << std::endl << std::endl;
	std::cout << "a matrisi 1. sutun 1. satir degeri: "  << a(1, 1) << std::endl << std::endl;

	Eigen::RowVector3d vec1; //  3 elemanl� double sat�r vekt�r� 3->3 eleman d->double

     //vec1 << 0.5, 1.3; //Boyutu derlenme zaman�nda belirlenmi� matris ve vekt�rlere virg�l ile atama yap�lacaksa
	//vec1(2) = 3.2;  // t�m elemanlara de�er verilmesi gerekmektedir.

	//vec1 << 0.5, 1.3, 3.2;
	//std::cout << vec1;
//	std::cin.get();
	//veya

	//vec1(0, 0) = 0.5; typedef tan�ml� vekt�r i�in yanl�� atama �ekli
	//vec1(0, 1) = 1.3;
	//vec1(0, 2) = 3.2;

	vec1(0) = 0.5;
	vec1(1) = 1.3;
	vec1(2) = 3.2;

	std::cout << "vec1 satir vektoru: " << std::endl << vec1 << std::endl << std::endl;
	
	/*Eigen::MatrixXi b(5,3); // 5 sat�r 3 s�tunluk integer matris
	std::cout << b << std::endl;
	for (int i = 0; i < b.rows(); ++i)//b.rows() -> b matrisinin sat�r say�s�
		for (int j = 0; j < b.cols(); ++j)//b.cols() -> b matrisinin s�tun say�s�
			b(i, j) = j + i*b.cols();

	std::cout << "b matrisi: " << std::endl << b << std::endl << std::endl;
	*/
	/*Eigen::Matrix<int, Eigen::Dynamic, Eigen::Dynamic> x(1,4);
	x << 0, 1, 2, 3;
	std::cout << x;
	x.resize(1, 5);
	x(0,4) = 6;
	std::cout << x;*/
	/*
	//Matrix<double, Dynamic, Dynamic> m;//Boyutu derlenme s�ras�nda belirlenmemi� double matris
	*/
	
	Matrix<int, 3, 1> vector;

	vector << 1, 2, 3;
	
	std::cout << vector << "vektorun normu  " << vector.norm() << std::endl;


	//m << 0.0, 1.1, 2.2,// Matrisin boyutu hen�z belli olmad��� i�in 
	//	   3.3, 4.4, 5.5;// girilen de�erlerin anlam� yoktur.
	/*
	Matrix<double, Dynamic, Dynamic> a2(2, 3);//2 sat�r 3 s�tundan olu�an double matris
	a2 << 0.0, 1.1, 2.2, 
   	     3.3, 4.4, 5.5;*/

	//veya 

//	MatrixXd b(2, 3);//MatrixXd --> X = Dynamic , d = double

	Matrix<double, Dynamic, Dynamic,RowMajor> a3(2, 3);//2 sat�r 3 s�tundan olu�an double matris
	a3 << 0.0, 1.1, 2.2,
   	     3.3, 4.4, 5.5;
	//veya 
	std::cout << *(a3.data()+1);
	MatrixXd b(2, 3);//MatrixXd --> X = Dynamic , d = double
	//b << 0.0, 1.1, 2.2, Eleman say�s�ndan fazla eleman girilmi�, hata verir.
	//	   3.3, 4.4, 5.5,
	// 	   6.6, 7.7, 8.8;

	//Blok i�lemleri

    return 0;
}

