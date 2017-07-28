#include <list>
#include <iostream>
#include <iterator>

using namespace std;
int main( )
{
    std::list<int> sayilar{0, 1, 2, 3, 4, 5, 6, 7};
    for (auto &i : sayilar) {
        std::cout << i << " ";
    }
    std::cout << '\n';

    sayilar.erase(sayilar.begin());
    //begin(): Ilk elemani dondurur. 
    //erase(): Silme islemi.
    
    for (auto &i : sayilar) {
        std::cout << i << " ";
    }
    std::cout << '\n';

    list<int>::iterator bas = sayilar.begin();
    //Iterator oldugu icin ilk elemanin adresini dondurur.
    list<int>::iterator son = sayilar.begin();
    advance(bas,2); //Bastan 2
    advance(son,5); //Bastan 5.

    sayilar.erase(bas, son);  // [2,5) yani bastan 2 dahil bese kadar sil.

    for (auto &i : sayilar) {
        std::cout << i << " ";
    }
    std::cout << '\n';
}