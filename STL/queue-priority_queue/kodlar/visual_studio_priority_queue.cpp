#include <iostream>
#include "stdafx.h"
#include <queue>
using namespace std;
/* bu kodu visual studio projenizin içine kopyalayin
örnek kod : bu sablon elemanlari buyukten kucuge siralar
çýktý
9 8
*/

int main() {

	priority_queue<int> q;
	q.push(7);     // ilk eleman 7 son eleman 7
	q.push(9);    // ilk eleman 9  son eleman 7,
	q.push(8);    // ilk eleman 9 son eleman hala 7 
				  // normal queue olsa idi sýralama 7 9 8 olurdu
				  // priority queue olduðu için sýralama 9 8 7 oldu

	cout << q.top() << endl;   // ilk eleman 9
	q.pop();      // sýranýn ilk elemaný cýkar (9)
	cout << q.top();    // ilk eleman artýk 8


	getchar();
	return 0;
}

