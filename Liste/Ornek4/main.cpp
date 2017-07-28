#include <iostream>
#include <list>
int main()
{
    std::list<int> c = {1, 2, 3};
    std::cout << "Liste: ";
    for(auto& el: c) std::cout << el << ' ';
    std::cout << '\n';
    
    c.resize(5); // Tanimlanmayan elemanlar icin 0 degerini ata.
    //resize(): Yeniden boyutlandir.
    std::cout << "5 elemanli: ";
    for(auto& el: c) std::cout << el << ' ';
    std::cout << '\n';
    
    c.resize(2);
    std::cout << "2 elemanli: ";
    for(auto& el: c) std::cout << el << ' ';
    std::cout << '\n';
}