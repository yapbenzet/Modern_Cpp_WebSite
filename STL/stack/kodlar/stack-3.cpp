#include <iostream>

#include <stack>
using namespace std;
/* bu kodu visual studio projenizin i�ine kopyalayin
�rnek kod 3: stackin boyutunu ve dolulugunu kontrol etme
��kt�
1
eleman sayisi 0
0
eleman sayisi 2
0
*/

int main() {

	stack<int> s;     // bo� stack
	bool e;
	e = s.empty();     // stack bo� oldu�u i�in 1 d�ner
	cout << e << endl;  // 1
	cout << "eleman sayisi " << s.size() << endl;  // eleman say�s� 0

	s.push(12);      // 12 ekledik
	s.push(13);      // 13 ekledik

	e = s.empty();    // stack dolu oldu�u i�in 0 d�ner
	cout << e << endl; // 0
	cout << "eleman sayisi " << s.size() << endl;   // eleman sayisi 2
	e=s.empty();
	cout << e;

	getchar();
	return 0;
}


