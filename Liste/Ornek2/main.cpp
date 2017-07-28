#include <list>
#include <iostream>
/**
 * Listenin kapasitesi icin islemler
 */
using namespace std;
int main()
{
    list<char> karakter;
    karakter.assign(5, 'a');  //5 tane char degeri atar.
    //assing(): Atama islemi yapar.

    for (char c : karakter) { //Karakter sayisi kadar döngü döner.
        cout << c << '\n';
    }

    list<int> sayilar;
    cout << "Bos mu? " << sayilar.empty() << '\n'; //Boş ise 1 dondurur.
    //empty(): Map in boslugunu kontrol eder.
    sayilar.push_back(33);
    //push_basck(): Sona eleman ekleme.
    sayilar.push_back(27);
    cout << "Bos mu? " << sayilar.empty() << '\n'; //Dolu ise 0 dondurur.

    list<int> sayilar2 {1, 3, 5, 7};
    cout << "sayilar2'nin eleman sayisi: " << sayilar2.size() << " elements.\n"; //Listenin eleman sayisini dondurur.
    //size(): Map in boyutunu dondurur.
    
    list<int> s;
    cout << "Tanimlanabilecek en buyuk boyut: " << s.max_size() << "\n"; //Tanimlanabilecek en buyuk boyuttur.
    //max_size(): Map in tanimlanabilecegi en buyuk boyut.
    return 0;
}