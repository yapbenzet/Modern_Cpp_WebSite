#include <iostream>

#include <forward_list>
using namespace std;
// bu kodu visual studio projenizin içine kopyalayin
// örnek kod 3 : listenin istenilen bir yerine eleman ekleme
// çikti
// 50  40  30  20  10
// 50  45  40  30  20  10

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
	l1.insert_after(l1.begin(), 45);  // listenin bas elemanin sonrasina 35 ekle
	for (auto i = l1.begin(); i != l1.end(); i++)
		cout << *i << "  ";            // yeni liste 50 45 40 30 20 10
	cout << endl;



	getchar();
	return 0;
}
