#include <iostream>

using namespace std;

class Dikdortgen{
public:
    int uzunluk;
    int genislik;
    void setUzunluk(int u);
    void setGenislik(int g);
};

void Dikdortgen::setUzunluk(int u) {
    uzunluk = u;
}

void Dikdortgen::setGenislik(int g) {
    genislik = g;
}

int main() {

    Dikdortgen kutu;

    kutu.setGenislik(5);
    kutu.uzunluk=10;    ///Hata vermez. Bu atama şekli sadece public elemanlara yapılabilir
    cout << kutu.uzunluk;

    return 0;
}