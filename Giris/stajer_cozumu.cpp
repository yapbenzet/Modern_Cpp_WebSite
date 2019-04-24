#include <iostream>
#include <vector>
class ogrenci{
public:

    virtual std::vector<std::string> calismaGunleri()= 0;
};
class gonulluOgrenci:public ogrenci{
public:
   gonulluOgrenci(){
      std::cout<<"Haftada 1 günümü laboratuvar çalışmaları için ayırabilirim.."<<std::endl;
   }
  std::vector<std::string> calismaGunleri(){
        std::vector<std::string> gun;
        gun.push_back("Pazartesi");
        return gun;
   }

};
class stajyer: public ogrenci{
public:
   stajyer(){
      std::cout<<"Staj süresince düzenli olarak laboratuvar projelerine  katkı sağlarım.."<<std::endl;
   }
   std::vector<std::string> calismaGunleri(){
        std::vector<std::string> gun;
        gun.push_back("21.04.2019-21.05.2019");
        return gun;
   }
};

int main()
{
   std::cout << "Gönüll Çalışan ve Stajyer Aranıyor.."<<std::endl;
   ogrenci* labCalisanlari;
   gonulluOgrenci* gonullu1 = new gonulluOgrenci();
   //labCalisanlari.push_back( gonullu1 );
   //labCalisanlari.push_back(new stajyer());
   return 0;
}