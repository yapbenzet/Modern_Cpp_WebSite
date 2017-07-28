#include <map>
#include <iostream>
int main()
{
    std::multimap<int, std::string> sayi  = {{1, "bir"}, {2, "iki"}, {3, "uc"},
                                             {4, "dort"}, {5, "bes"}, {6, "alti"}};

    for(auto i = sayi.begin(); i != sayi.end(); )
        if(i->first % 2 == 1)  //tek sayilari sil
            i = sayi.erase(i);
            //erase(): Eleman silme islemi.
        else
            ++i;
    for(auto& p : sayi)
        std::cout << p.second << ' ';
}