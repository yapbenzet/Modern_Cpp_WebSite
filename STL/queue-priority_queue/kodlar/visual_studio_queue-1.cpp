#include <iostream>
#include "stdafx.h"
#include <queue>
using namespace std;
/* bu kodu visual studio projenizin içine kopyalayin
örnek kod 1: listenin ilk ve son elemanýný görme
çýktý

12  12
12  13
*/


int main() {

	queue<int> q;    // boþ sira
	q.push(12);      // siraya 12 ekledik
	cout << q.front() << "  " << q.back() << endl;   // ilk eleman 12 son eleman 12
	q.push(13);      // sýraya 13 ekledik
	cout << q.front() << "  " << q.back() << endl; // ilk eleman 12 son eleman 13


	getchar();
	return 0;
}
