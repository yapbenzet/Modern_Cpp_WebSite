#include <iostream>

#include <stack>
using namespace std;
/* bu kodu visual studio projenizin i�ine kopyalayin
�rnek kod 1: stacktan eleman cikarma
��kt�
12
13
12
*/

int main() {

	stack<int> s;    // bo� stack
	s.push(12);
	cout << s.top() << endl;   // top 12 yi g�steriyor
	s.push(13);      // stacka 13 ekledik
	cout << s.top() << endl; // top �imdi 13 � g�sterir
	s.pop();        // son eklenen eleman� c�kart�r (13)
	cout << s.top();  // top �imdi 12 yi g�sterir

	getchar();
	return 0;
}

