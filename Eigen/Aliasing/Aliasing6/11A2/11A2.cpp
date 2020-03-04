// //Visual Studio icin.
#include <iostream>
#include <Eigen/Dense>
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
	cout << matB<<endl <<endl;

    Eigen::Matrix4i m;
    m <<     1, 5, 9, 13,
            2, 6, 10, 14,
            3, 7, 11, 15,
            4, 8, 12, 16;
    cout << "m.leftCols(1) =" << endl << m.leftCols(2) << endl << endl;
    m.topLeftCorner(1, 3) = m.bottomRightCorner(3, 1);
    cout << "Atama sonrasi, m = " << endl << m << endl;


	cin.get();
    return 0;
}

