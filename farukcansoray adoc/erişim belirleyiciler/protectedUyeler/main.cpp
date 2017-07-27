#include <iostream>

using namespace std;

class Dikdortgen{
protected:
    int uzunluk;
    int genislik;
};

class turetilmisDikdortgen:Dikdortgen{///Türetilmiş(çocuk) sınıf
public:
    void setUzunluk(int u);
    int getUzunluk();
};

/// Çocuk Sınıfın Üye Fonksiyon Tanımlamaları
void turetilmisDikdortgen::setUzunluk(int u) {
    uzunluk = u;
}

int turetilmisDikdortgen::getUzunluk() {
    return uzunluk;
}

int main () {
    turetilmisDikdortgen kutu;

    ///kutu.uzunluk = 85;///Hata: Protected üyeye ana veya türetilmiş sınıf dışında erişilemez
    kutu.setUzunluk(85);/// Üye fonksiyon kullanılmalıdır

    cout << "kutu uzunlugu: " << kutu.getUzunluk() << endl ;

    return 0;
}