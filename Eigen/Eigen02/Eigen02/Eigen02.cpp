#include <iostream>
#include <Eigen/Dense>


using namespace Eigen;
using namespace std;

int main()
{


	//Matrix<int, 5, 4> m;
	////m.resize(4, 3);

	//cout << "m matrisinin de�erleri: " << m(4, 3) << " - cols =   " << m.cols() << endl;


	//cout << "m matrisi boyutu: " << m.rows() << "x" << m.cols() << endl;
	//cout << "Eleman sayisi: " << m.size() << endl;

	//1 2
	//3 4
	//a(1,2) --> 1. sat�r 2. s�tun yanl��
	//a(1,2) --> 2. sat�r 3. s�tun do�ru
	//tan�mlanan a matrisinde 2. sat�r var fakat 3. s�tun yok.
	//ekrana ne yazar? hata m� verir? 
	//compile time error --> derleme zaman� hatas�
	//run time error --> �al��ma zaman� hatas�


	//MatrixXf a(2, 2); a << 1, 2, 3, 4;
	//MatrixXf b(3, 3);
	//a = b;
	//cout << "a matrisinin de�erleri: " << a(1, 2) << " - cols =   " << a.cols() << endl; 

	MatrixXf a(2, 2); a << 1, 2, 3, 4;
	MatrixXf b(3, 3);
	a = b;
	cout << "a matrisinin degerleri: " << a(1, 2) << " - cols =   " << a.cols() << endl; 

	//cout << endl<<endl<<" a de�eri = " << a(1, 2) << endl;

}