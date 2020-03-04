#include <iostream>

#include <priority_queue>
using namespace std;
/* bu kodu visual studio projenizin i�ine kopyalayin
�rnek kod : bu sablon elemanlari buyukten kucuge siralar
��kt�
12  14
13  14
*/

int main() {

	priority_queue<int> q;
	q.push(7);     // ilk eleman 7 son eleman 7
	q.push(9);    // ilk eleman 9  son eleman 7,
	q.push(8);    // ilk eleman 9 son eleman hala 7 
				  // normal queue olsa idi s�ralama 7 9 8 olurdu
				  // priority queue oldu�u i�in s�ralama 9 8 7 oldu
	
	cout << q.top() << endl;   // ilk eleman 9
	q.pop();      // s�ran�n ilk eleman� c�kar (9)
	cout << q.top();    // ilk eleman art�k 8


	getchar();
	return 0;
}
��kt�
9
8
