#include <iostream>
#include <list>
/**
 * Tekrar önleme (Yalnızca ard arda oldugunda)
 */
int main()
{
    std::list<int> sayilar = {17, 20, 1, 2, 2, 5, 3, 3, 2, 1, 1, 2};

    std::cout << "Once:  ";
    for (auto i : sayilar)
        std::cout << ' ' << i;
    std::cout << '\n';

    sayilar.unique();
    //unique(): Ard arda gelen tekrarlari siler.
    std::cout << "Ard arda tekrarsiz: ";
    for (auto i : sayilar)
        std::cout << ' ' << i;
    std::cout << '\n';

    sayilar.sort(); //Ard arda oldugunda tekrar onlendigi icin siralama yapildi.
    //sort(): Kucukten buyuge siralar.
    sayilar.unique();
    std::cout << "Tekrarsiz: ";
    for (auto i : sayilar)
        std::cout << ' ' << i;
    std::cout << '\n';
    return 0;
}