#include <iostream>
#include <list>
int main()
{
    std::list<int> c = {1, 2, 3};
    std::cout << "Liste: ";
    for(auto& el: c) std::cout << el << ' ';
    std::cout << '\n';
    c.resize(5); //Yeniden boyutlandir. Tanimlanmayan elemanlar icin 0 degerini ata.
    std::cout << "5 elemanli: ";
    for(auto& el: c) std::cout << el << ' ';
    std::cout << '\n';
    c.resize(2);
    std::cout << "2 elemanli: ";
    for(auto& el: c) std::cout << el << ' ';
    std::cout << '\n';
}