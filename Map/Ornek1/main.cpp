#include <iostream>
#include <iomanip>
#include <map>
/**
 * Map tanimlamalari ve atama islemleri gösterilmistir.
 */
template<typename Map>
void print_map(Map& m)  //Kolay yazdirma islemi
{
    std::cout << '{';
    for(auto& p: m)
        std::cout << p.first << ':' << p.second << ' ';
    std::cout << "}\n";
}
//map.first: Anahtar
//map.second: Deger

struct Nokta { double x, y; };
struct NoktaCmp {
    bool operator()(const Nokta& lhs, const Nokta& rhs) const {
        return lhs.x < rhs.x;
    }
};
int main() {
    // (1) Default yapici
    std::map<std::string, int> map1;
    map1["Bir"] = 1;
    map1["Iki"] = 2;
    map1["One"] = 1;
    std::cout << "map1 = ";
    print_map(map1);

    // (2) Aralık atamali yapici
    std::map<std::string, int> iter(map1.find("Bir"), map1.end()); 
    //find(): Gonderilen elemani bulup döndürür.
    //end(): Map in son elemanni döndürür.
    std::cout << "\nAralik alinan = ";
    print_map(iter);
    std::cout << "map1 = ";
    print_map(map1);

    // (3) Kopyalamali yapici
    std::map<std::string, int> copied(map1);
    std::cout << "\nKopyalanan = ";
    print_map(copied);
    std::cout << "map1 = ";
    print_map(map1);

    // (4) Tasimali yapici
    std::map<std::string, int> moved(std::move(map1));
    //move(): Yollanani tasir.
    std::cout << "\nTasimali = ";
    print_map(moved);
    std::cout << "map1 = ";
    print_map(map1);

    // (5) Liste seklinde tanimlamali yapici
    const std::map<std::string, int> map2{
            {"Merhaba",  100},
            {"Dunya",   100},
    };
    std::cout << "\ninit = ";
    print_map(map2);

    std::map<Nokta, double, NoktaCmp> map3 = { //Struct bir anahtara sahip map
            {{5,  -12}, 13},
            {{3,  4},   5},
            {{-8, -15}, 17}
    };

    for (auto p : map3)
        std::cout << "Nokta: (" << p.first.x
                  << ", " << p.first.y << ") Buyukluk:  "
                  << p.second << '\n';

    return 0;
}