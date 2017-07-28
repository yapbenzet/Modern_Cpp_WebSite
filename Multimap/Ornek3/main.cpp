#include <map>
#include <iostream>
#include <utility>

int main()
{
    std::multimap<int, int> sayilar;

    std::cout << "Bos mu?: " << sayilar.empty() << std::endl; //1 ise bos
    //empty(): Eleman olup olmadigini kontrol eder.

    sayilar.emplace(42, 13);
    //emplace(): Kurucu ile dogrudan atama.
    sayilar.insert(std::make_pair(13317, 123));
    //insert(): pair olarak olusturulan multimap e eklenir.
    std::cout << "Bos mu?: " << sayilar.empty() << std::endl; //1 ise bos

    std::cout << "Boyut: " << sayilar.size() << std::endl;
    //size(): Boyutu dondurur.

    std::cout << "Tanimlanabilecek en buyuk boyut: " << sayilar.max_size() << std::endl;
    //max_size():Tanimlanabilecek en buyuk boyutu dondurur.

    sayilar.clear();
    //Multimap in bütün elemanlarini siler.
    std::cout << "Boyut: " << sayilar.size() << std::endl;
}