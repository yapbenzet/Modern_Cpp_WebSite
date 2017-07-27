#include <iostream>
#include <list>
/**
 * Sıralama ve tersini alma
 */
std::ostream& operator<<(std::ostream& ostr, const std::list<int>& list)
{
    for (auto &i : list) {
        ostr << " " << i;
    }
    return ostr;
}

int main()
{
    std::list<int> liste = { 15,7,5,9,0,9,3,2,6,4 };

    std::cout << "Once:   " << liste << "\n";
    liste.sort();
    std::cout << "Artan:   " << liste << "\n";
    liste.reverse();
    std::cout << "Azalan: " << liste << "\n";
}