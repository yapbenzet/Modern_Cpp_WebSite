#include <iostream>
#include <map>
int main()
{
    std::map<int, char> aranacak = {{1,'a'},{2,'b'}};

    auto ara = aranacak.find(2); 
    //find(): Gonderilen anahtari elemanlarda ara.
    if(ara != aranacak.end()) {
        //end(): Map in son elemanini dondurur.
        std::cout << "Bulundu: " << ara->first << " " << ara->second << std::endl ;
    }
    else {
        std::cout << "Bulunamadi\n";
    }
}