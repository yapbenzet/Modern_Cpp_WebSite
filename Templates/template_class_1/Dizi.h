//
// Created by ozden on 26/07/2017.
//

#ifndef TEMPLATE_CLASS_1_DIZI_H
#define TEMPLATE_CLASS_1_DIZI_H
#include <assert.h>//assert() için
class IntDizi
{
private:
    int m_uzunluk;
    int* m_veri;

public:
    IntDizi(){
        m_uzunluk = 0;
        m_veri = nullptr;
    }

    IntDizi(int uzunluk){
        assert(uzunluk > 0);
        m_veri = new int[uzunluk];
        m_uzunluk = uzunluk;
    }

    ~IntDizi(){
        delete[] m_veri;
    }

    void Sil(){
        delete[] m_veri;
        m_veri = nullptr;
        m_uzunluk = 0;
    }

    int& operator[](int index){
        assert(index >=0 && index < m_uzunluk);
        return m_veri[index];
    }

    int getUzunluk() const {return m_uzunluk;}
};
#endif //TEMPLATE_CLASS_1_DIZI_H
