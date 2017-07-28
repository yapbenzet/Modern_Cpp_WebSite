#include <iostream>
#include <map>

struct Nokta { double x, y; };
struct NoktaCmp {
    bool operator()(const Nokta& lhs, const Nokta& rhs) const {
        return lhs.x < rhs.x; // NB. ignores y on purpose
    }
};

int main() {
    std::multimap<int, int> multimap1 = {{1,2},{2,1},{3,3},{7,4},{4,5},{4,4},{3,3},{2,2},{3,3}}; //Multimap ile uye atamasi.
    for(auto& p: multimap1)
        std::cout << p.first << ' ' << p.second << '\n';

    std::multimap<Nokta, double, NoktaCmp> multimap2{
            { {8, 12}, 15 },
            { {4, 7}, 7 },
            { {8, 15}, 17 },
            { {3, -3}, -5 },
    }; //Multimap ile uye atamasi.
    for(auto p : multimap2)
        std::cout << "(" << p.first.x
                  << ", " << p.first.y << ") is "
                  << p.second << '\n';
}