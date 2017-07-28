#include <map>
#include <iostream>

int main()

{
    std::map<int,char> sayilar {{1, 'a'}, {3, 'b'}, {5, 'c'}, {7, 'd'}};

    std::cout << "Bos mu?: " << sayilar.empty() << std::endl; //1 ise bos
    //empty(): Eleman olup olmadigini kontrol eder.

    std::cout << "Boyut: " << sayilar.size() << std::endl;
    //size(): Boyutu dondurur.

    std::cout << "Tanimlanabilecek en buyuk boyut: " << sayilar.max_size() << std::endl;
    //max_size():Tanimlanabilecek en buyuk boyutu dondurur.

    sayilar.clear();
    //Map in bütün elemanlarini siler.
    std::cout << "Boyut: " << sayilar.size() << std::endl;
}