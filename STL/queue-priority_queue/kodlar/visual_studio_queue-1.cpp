#include <iostream>

#include <queue>
using namespace std;
/* bu kodu visual studio projenizin i�ine kopyalayin
�rnek kod 1: listenin ilk ve son eleman�n� g�rme
��kt�

12  12
12  13
*/


int main() {

	queue<int> q;    // bo� sira
	q.push(12);      // siraya 12 ekledik
	cout << q.front() << "  " << q.back() << endl;   // ilk eleman 12 son eleman 12
	q.push(13);      // s�raya 13 ekledik
	cout << q.front() << "  " << q.back() << endl; // ilk eleman 12 son eleman 13


	getchar();
	return 0;
}
