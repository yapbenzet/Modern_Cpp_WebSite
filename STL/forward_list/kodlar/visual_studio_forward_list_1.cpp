#include <iostream>
#include <forward_list>
#include "stdafx.h"
using namespace std;
/* bu kodu visual studio projenizin içine kopyalayın
örnek kod 1: push_front ve pop_front fonksiyonlarını kullanma
 çıktı
 50 40
*/
int main()
{
	forward_list<int> l1;
	l1.push_front(10);
	l1.push_front(20);
	l1.push_front(30);
	l1.push_front(40);
	l1.push_front(50);  // ekleme işlemi başa yapıldığı için sıralama 50 40 30 20 10 şeklinde oldu

	cout << *l1.begin() << endl;  // listenin baş elemanı 50
	l1.pop_front();               // listenin başındaki eleman silindi (50)
	cout << *l1.begin() << endl;  // listenin başındaki eleman 40
							

	getchar();
	return 0;
}
