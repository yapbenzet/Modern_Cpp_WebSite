//#include "stdafx.h" //Visual Studio icin.
#include <iostream>
#include <Eigen>
using namespace std;
using namespace Eigen;

int main()
{
	MatrixXf a(2, 3); a << 1, 2, 
						   3, 4, 
						   5, 6;
	cout << "Here is the initial matrix a:\n" << a << endl;
	/*
	"a = a.transpose().eval();" komutu hatayi giderir. Fakat 
	"a.transposeInPlace();" komutu ile de hatasiz calisma saglanabilir.
	*/
	a.transposeInPlace();
	cout << "and after being transposed:\n" << a << endl;
	cin.get();
    return 0;
}

