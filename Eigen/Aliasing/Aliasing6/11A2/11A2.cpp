//#include "stdafx.h" //Visual Studio icin.
#include <iostream>
#include <Eigen>
using namespace std;
using namespace Eigen;

int main()
{
	MatrixXf matA(2, 2), matB(2, 2);
	matA << 2, 0, 
			0, 2;
	matB = matA * matA;
	// Verimli degil.
	cout << matB << endl << endl;
	matB.noalias() = matA * matA;
	// Daha verimli. Sonucu gecici bir matriste tutup matB'ye kopyalanmak yerine dogrudan matB'ye atar.
	cout << matB;
	cin.get();
    return 0;
}

