#include <list>
#include <string>
#include <iostream>
using namespace std;
struct Baskan
{
    string isim;
    string ulke;
    int yil;

    Baskan(string Isim, string Ulke, int Yil)
            : isim(move(Isim)), ulke(move(Ulke)), yil(Yil)
    {
        cout << "Yapici ile olusturuldu.\n";
    }
    Baskan(Baskan&& baska)
            : isim(move(baska.isim)), ulke(move(baska.ulke)), yil(baska.yil)
    {
        cout << "Yeniden secildi. Bilgiler tasindi." << endl;
    }
    Baskan& operator=(const Baskan& baska) = default;
};

int main()
{
    list<Baskan> Secilen;
    Secilen.emplace_back("Nelson Mandela", "South Africa", 1994);

    list<Baskan> yenidenSecilen;
    yenidenSecilen.push_back(Baskan("Franklin Delano Roosevelt", "the USA", 1936));

    for (Baskan const& baskan: Secilen) {
        cout << baskan.isim << " " << baskan.ulke << "'nin " << baskan.yil << " yili baskanidir.\n";
    }
    for (Baskan const& president: yenidenSecilen) {
        cout << president.isim << " " << president.ulke << "'de " << president.yil << " yilinda tekrar baskan secilmistir.\n";
    }
}