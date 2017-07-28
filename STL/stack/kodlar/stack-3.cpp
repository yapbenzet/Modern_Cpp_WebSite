#include <iostream>
#include "stdafx.h"
#include <stack>
using namespace std;
/* bu kodu visual studio projenizin içine kopyalayin
örnek kod 3: stackin boyutunu ve dolulugunu kontrol etme
çýktý
1
eleman sayisi 0
0
eleman sayisi 2
0
*/

int main() {

	stack<int> s;     // boþ stack
	bool e;
	e = s.empty();     // stack boþ olduðu için 1 döner
	cout << e << endl;  // 1
	cout << "eleman sayisi " << s.size() << endl;  // eleman sayýsý 0

	s.push(12);      // 12 ekledik
	s.push(13);      // 13 ekledik

	e = s.empty();    // stack dolu olduðu için 0 döner
	cout << e << endl; // 0
	cout << "eleman sayisi " << s.size() << endl;   // eleman sayisi 2
	e=s.empty();
	cout << e;

	getchar();
	return 0;
}


