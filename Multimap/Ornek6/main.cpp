#include <iostream>
#include <map>

int main()
{
    std::multimap<int, char> anahtar {
            {1, 'A'},
            {2, 'B'},
            {2, 'C'},
            {2, 'D'},
            {4, 'E'},
            {3, 'F'}
    };

    auto ata = anahtar.equal_range(2);
    //equal_range():2 olanları ata.

    for (auto i = ata.first; i != ata.second; ++i)
    {
        std::cout << i->first << ": " << i->second << '\n';
    }
}