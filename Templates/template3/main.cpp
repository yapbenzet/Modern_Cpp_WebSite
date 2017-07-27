#include <iostream>

using namespace std;

template <class T>
T ortalama(T* dizi, int uzunluk){
    T toplam = 0;
    for (int sayac = 0; sayac < uzunluk; ++sayac)
        toplam += dizi[sayac];

    toplam /= uzunluk;

    return toplam;
}

int main()
{
    int dizi1[] = {5, 3, 2, 1, 4};
    cout << ortalama(dizi1, 5) << endl;

    double dizi2[] = {3.12, 5.48, 9.47, 6.88};
    cout << ortalama(dizi2, 4) << endl;

    return 0;
}