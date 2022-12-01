//Şekildeki gibi bir derleme hatası oluşacaktır:
//Baştaki hata mesajı Para sınıfı için overload edilmiş > operatörünün olmadığını belirtiyor. Sonda ise oluşturulan fonksiyonun hatalı olduğunu gösteriyor.
//Bu problem max() fonksiyonunun kullanılmak istendiği sınıflar için > operatörünün overload edilmesiyle çözülebilir:

#include <iostream>

template <typename T>
const T& myMax(const T& x, const T& y){
    return (x > y) ? x : y;
}

class Para{
private:
    int m_para;
public:
    Para(int para) : m_para(para){//Yapıcı Fonksiyon
    }
};

int main()
{
    Para besLira(5);
    Para onLira(10);
    Para buyuk = myMax(besLira, onLira);
    return 0;
}