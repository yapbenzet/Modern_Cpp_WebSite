#include <iostream>
// includer içerisinde <> işaretli compiler ayarlarında belirtilen klasörlere bakar. 
//#include <sinif.cpp>    belirli klasörlerin içerisinde arar ve bulamaz.

//aynı klasör içindeki dosyalara bakmasını istiyorsak: 
#include "sinif.hpp"

using namespace std;



int main()
{
    sinif nesne1;
    cout<<nesne1.x<<" ve " << nesne1.y << endl;

    sinif nesne2(3,4);
    cout<<nesne2.x<<" ve " << nesne2.y << endl;

    int x=555; cout<<"x="<<x<<endl;
    {
    int x=666; cout<<"x="<<x<<endl;
    }
    cout<<"x="<<x<<endl;

    cout<<"ekrana yazdırma işlemi = "<<endl;
    nesne2.ekrana_yazdir();

    
    const sinif& nesne3 = nesne2;
    //nesne3.x = 33; 
    //nesne3.y = 44;

    cout<<"ekrana yazdırma işlemi = "<<endl;
    nesne3.ekrana_yazdir();

    cout<<"ekrana yazdırma işlemi = "<<endl;
    nesne2.ekrana_yazdir();




}