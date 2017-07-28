#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> stringSet;///String elemanları tutmak için uorder set tanımlanıyor

    //Eleman eklemek için insert kullanılır.
    stringSet.insert("code");//
    stringSet.insert("in");
    stringSet.insert("c++");
    stringSet.insert("is");
    stringSet.insert("fast");

    string key = "slow";///Oluşturulan sette(kümede) arama işlemi yapmak için bir key(anahtar) oluşturulur.

    if (stringSet.find(key) == stringSet.end())//Set içinde anahtarı arama kısmı, setin sonuna kadar
        cout << key << " Bulunamadi.\n\n";
    else
        cout << "Bulundu:" << key << endl << endl;

    key = "c++";
    if (stringSet.find(key) == stringSet.end())
        cout << key << " Bulunamadi\n";
    else
        cout << "Bulundu " << key << endl;

    ///unorder list ile birlikte
    cout << "\nTum elemanlar : ";
    unordered_set<string> :: iterator itr;
    for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
        cout << (*itr) << endl;
}
