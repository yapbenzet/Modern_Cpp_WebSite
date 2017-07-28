#include <map>
#include <iostream>
/**
 * Multimap kopyalama ve tasima islemi yapilmistir.
 */
using namespace std;
void boyutuYazdir(const multimap<int,int> &sayilar1,
                  const multimap<int,int> &sayilar2,
                  const multimap<int,int> &sayilar3)
{
    cout << "sayilar1: " << sayilar1.size()
         << " sayilar2: " << sayilar2.size()
         << " sayilar3: " << sayilar3.size() << '\n';
}
//size(): Boyutu dondurur.
int main()
{
    std::multimap<int, int> sayilar1 {{3, 1}, {4, 1}, {5, 9},
                                      {6, 1}, {7, 1}, {8, 9}};
    std::multimap<int, int> sayilar2;
    std::multimap<int, int> sayilar3;

    cout << "Tanimlanan:\n";
    boyutuYazdir(sayilar1, sayilar2, sayilar3);

    sayilar2 = sayilar1;
    cout << "Kopyalanan:\n";
    boyutuYazdir(sayilar1, sayilar2, sayilar3);

    sayilar3 = move(sayilar1);
    //move(): Yollanani tasir.
    cout << "Tasinan:\n";
    boyutuYazdir(sayilar1, sayilar2, sayilar3);
}