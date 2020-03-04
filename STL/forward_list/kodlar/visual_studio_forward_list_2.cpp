#include <iostream>

#include <forward_list>
using namespace std;

/* bu kodu visual studio projenizin içine kopyalayin
Örnek kod 2: bir listeyi yazdirma örnegi 
// çikti
// 50  40  30  20  10
*/

int main() {
	forward_list<int> l1;
	l1.push_front(10);
	l1.push_front(20);
	l1.push_front(30);
	l1.push_front(40);
	l1.push_front(50);

	for (auto i = l1.begin(); i != l1.end(); i++)
		cout << *i << "  ";
	cout << endl;


	getchar();
	return 0;
}
