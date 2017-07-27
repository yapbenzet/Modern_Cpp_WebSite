#include <iostream>

using namespace std;

template <class T, int boyut>//boyut ifade parametresidir
class StatikDizi
{
private:
    //İfade parametresi dizinin boyutunu belirliyor
    T m_dizi[boyut];

public:
    T* getDizi();

    T& operator[](int index){
        return m_dizi[index];
    }
};

template <class T, int boyut>
T* StatikDizi<T,boyut>::getDizi(){
    return m_dizi;
}

int main()
{
    //12 integerlık yere sahip integer dizi oluşturulur
    StatikDizi<int, 12> intDizi;

    //Sırayla doldurulur ve tersten yazdırılır
    for(int sayac = 0; sayac < 12; ++sayac)
        intDizi[sayac] = sayac;

    for(int sayac = 11; sayac >= 0; --sayac)
        cout << intDizi[sayac] << " ";

    cout << endl;

    //4 double'lık yere sahip double dizi oluşturulur
    StatikDizi<double, 4> doubleDizi;

    for(int sayac = 0; sayac < 4; ++sayac)
        doubleDizi[sayac] = 4.4 + 0.1*sayac;

    for(int sayac = 0; sayac < 4; ++sayac)
        cout << doubleDizi[sayac] << " ";

    return 0;
}