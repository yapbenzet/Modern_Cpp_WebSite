#include <iostream>

using namespace std;

class Dikdortgen
{
public:
    void setUzunluk(int u);
    void setGenislik(int g);
    int getUzunluk();
    int getGenislik();
    int getAlan();

private:
    int uzunluk;
    int genislik;
};

/// Üye Fonksiyonların Tanımlamaları
void Dikdortgen::setUzunluk(int u)
{
    uzunluk = u;
}

void Dikdortgen::setGenislik(int g)
{
    genislik = g;
}

int Dikdortgen::getUzunluk()
{
    return uzunluk;
}

int Dikdortgen::getGenislik()
{
    return genislik;
}

int Dikdortgen::getAlan()
{
    return uzunluk * genislik;
}

int main()
{

    Dikdortgen kutu;

    kutu.setGenislik(5);
    //kutu.uzunluk=10; ///Hata: Private olan bir elemana doğrudan erişilemez.
    kutu.setUzunluk(10); /// Üye fonksiyon kullanılmalıdır

    cout << "kutu uzunlugu: " << kutu.getUzunluk() << endl;
    //cout &lt;&lt; "kutu genisligi: " &lt;&lt; kutu.genislik &lt;&lt; endl; ///Hata: Private elemana doğrudan erişilemez
    cout << "kutu genisligi: " << kutu.getGenislik() << endl; /// Üye fonksiyon kullanılmalıdır

    cout << "kutu alani: " << kutu.getAlan() << endl;

    return 0;
}