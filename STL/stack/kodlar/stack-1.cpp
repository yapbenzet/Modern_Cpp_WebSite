#include <iostream>
#include "stdafx.h"
#include <stack>
using namespace std;
/* bu kodu visual studio projenizin içine kopyalayin
örnek kod 1: stacktan eleman cikarma
çýktý
12
13
12
*/

int main() {

	stack<int> s;    // boþ stack
	s.push(12);
	cout << s.top() << endl;   // top 12 yi gösteriyor
	s.push(13);      // stacka 13 ekledik
	cout << s.top() << endl; // top þimdi 13 ü gösterir
	s.pop();        // son eklenen elemaný cýkartýr (13)
	cout << s.top();  // top þimdi 12 yi gösterir

	getchar();
	return 0;
}

