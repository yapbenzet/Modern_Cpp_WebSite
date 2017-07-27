#include <iostream>

using namespace std;

class Para{
private:
    int m_para;
public:
    Para(int para) : m_para(para){//Yapıcı Fonksiyon
    }

    friend bool operator>(const Para &p1, const Para &p2){
        return (p1.m_para > p2.m_para);
    }
};

template <class T>
T ortalama(T* dizi, int uzunluk){
    T toplam = 0;
    for (int sayac = 0; sayac < uzunluk; ++sayac)
        toplam += dizi[sayac];

    toplam /= uzunluk;

    return toplam;
}
//average() fonksiyonunun Para nesnesi döndürdüğü unutulmamalıdır.
//ve cout ve << operatörü ile bu nesneyi yazdırmak istiyoruz. Fakat Para sınıfı için herhangi bir << operatörü tanımlamadık:
int main()
{

    Para dizi3[] = {Para(5), Para(10), Para(15), Para(14)};
    cout << ortalama(dizi3, 4) << endl;
    return 0;
}
//Düzetme kısmı:

/*class Para{
private:
    int m_para;
public:
    Para(int para) : m_para(para){//Yapıcı Fonksiyon
    }

    friend bool operator>(const Para &p1, const Para &p2){
        return (p1.m_para > p2.m_para);
    }

    friend ostream& operator<< (ostream& out, const Para& para){
        out << para.m_para << " lira";
        return out;
    }
};
 */

/*
  class Para{
private:
    int m_para;
public:
    Para(int para) : m_para(para){//Yapıcı Fonksiyon
    }

    friend bool operator>(const Para &p1, const Para &p2){
        return (p1.m_para > p2.m_para);
    }

    friend ostream& operator<< (ostream& out, const Para& para){
        out << para.m_para << " lira";
        return out;
    }

    void operator+=(Para para){
        m_para += para.m_para;
    }

    void operator/=(int x){
        m_para /= x;
    }
};
 */