#include <map>
#include <iostream>
/**
 * Map kopyalama ve tasima islemi yapilmistir.
 */
using namespace std;
void boyutuYazdir(const map<int,int> &sayilar1,
                   const map<int,int> &sayilar2,
                   const map<int,int> &sayilar3)
{
    cout << "sayilar1: " << sayilar1.size()
              << " sayilar2: " << sayilar2.size()
              << " sayilar3: " << sayilar3.size() << '\n';
}
//size(): Boyutu dondurur.
int main()
{
    map<int, int> sayilar1 {{2, 1}, {8, 5}, {5, 9},
                              {9, 3}, {7, 1}, {6, 1}};
    map<int, int> sayilar2;
    map<int, int> sayilar3;

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