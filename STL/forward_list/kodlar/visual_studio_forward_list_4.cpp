#include <iostream>
#include "stdafx.h"
#include <forward_list>
using namespace std;
// bu kodu visual studio projenizin içine kopyalayýn
// örnek kod 4 : listenin istenilen bir yerine dizi ekleme

int main() {
	forward_list<int> l1;
	l1.push_front(10);
	l1.push_front(20);
	l1.push_front(30);
	l1.push_front(40);
	l1.push_front(50);

	for (auto i = l1.begin(); i != l1.end(); i++)
		cout << *i << "  ";             // liste 50 40 30 20 10
	cout << endl;
	int a[] = { 8 , 6 , 4 , 2 };
	l1.insert_after(l1.begin(), a, a + 4);   // 50 elemanýnýn sonrasýna [a,a+4) aralýðýný ekleme
	for (auto i = l1.begin(); i != l1.end(); i++)
		cout << *i << "  ";                  // 50 8 6 4 2 40 30 20 10
	cout << endl;

	// çýktý
	// 50 40 30 20 10
	// 50 8 6 4 2 40 30 20 10


		getchar();
	return 0;
}

