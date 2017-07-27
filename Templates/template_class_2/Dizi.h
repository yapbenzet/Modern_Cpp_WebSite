//
// Created by ozden on 26/07/2017.
//

#ifndef TEMPLATE_CLASS_2_DIZI_H
#define TEMPLATE_CLASS_2_DIZI_H
#include <assert.h>//assert() için

template <class T>
class Dizi
{
private:
    int m_uzunluk;
    T* m_veri;

public:
    Dizi(){
        m_uzunluk = 0;
        m_veri = nullptr;
    }

    Dizi(int uzunluk){
        assert(uzunluk > 0);
        m_veri = new T[uzunluk];
        m_uzunluk = uzunluk;
    }

    ~Dizi(){
        delete[] m_veri;
    }

    void Sil(){
        delete[] m_veri;
        m_veri = nullptr;
        m_uzunluk = 0;
    }

    T& operator[](int index){
        assert(index >=0 && index < m_uzunluk);
        return m_veri[index];
    }

    int getUzunluk();
};

#endif //TEMPLATE_CLASS_2_DIZI_H
