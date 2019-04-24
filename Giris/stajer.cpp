#include <iostream>
#include <vector>
class ogrenci{
    virtual std::vector<std::string>  calismaGunleri()= 0;
};
class gonulluOgrenci:public ogrenci{
   gonulluOgrenci(){
      std::cout<<"Haftada 1 günümü laboratuvar çalışmaları için ayırabilirim.."<<std::endl;
   }

};
class stajyer: public ogrenci{
   stajyer(){
      std::cout<<"Staj süresince düzenli olarak laboratuvar projelerine  katkı sağlarım.."<<std::endl;
   }
};

int main()
{
   std::cout << "Gönüll Çalışan ve Stajyer Aranıyor.."<<std::endl;
   std::vector<ogrenci> labCalisanlari;
   labCalisanlari.push_back(new gonulluOgrenci());
   labCalisanlari.push_back(new stajyer());
   return 0;
}