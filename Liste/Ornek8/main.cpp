#include <iostream>
#include <list>
/**
 * Araya koyma fonksiyonu.
 */
std::ostream& operator<<(std::ostream& ostr, const std::list<int>& list)
{
    for (auto &i : list) {
        ostr << " " << i;
    }
    return ostr;
}
int main ()
{
    std::list<int> liste1 = { 1, 2, 3, 4, 5 };
    std::list<int> liste2 = { 10, 20, 25, 30, 50 };

    auto ata = liste1.begin();
    std::advance(ata, 2);

    std::cout << "list1: " << liste1 << "\n";
    std::cout << "list2: " << liste2 << "\n";

    liste1.splice(ata, liste2); //2. elemandan itibaren liste2'yi araya koy.

    std::cout << "list1: " << liste1 << "\n";
    std::cout << "list2: " << liste2 << "\n";
}