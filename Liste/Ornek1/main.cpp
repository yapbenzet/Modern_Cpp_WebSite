#include <list>
#include <string>
#include <iostream>
/**
 * Liste tanimlamasi gösterilmiştir. Aynı zamada başa ve sona eleman ekleme işlenmiştir.
 */
using namespace std;
template<typename T> // Liste yazdirmasinin daha kolay kullanimi
std::ostream& operator<<(std::ostream& s, const std::list<T>& v) {
    s.put('[');
    char virgul[3] = {'\0', ' ', '\0'};
    for (const auto& e : v) {
        s << virgul << e;
        virgul[0] = ',';
    }
    return s << ']';
}
int main()
{
    list<int> sayilar;
    sayilar.push_front(1); //Başa 1 ekler. Eleman yoksa ilkini olusturur.
    //push_front(): Basa eleman ekleme.
    sayilar.push_front(2); //Başa 2 ekler.
    sayilar.push_back(3); //Sona 3 ekler.
    //push_back(): Sona eleman ekleme.
    cout << sayilar <<endl;

    list<string> kelime{"Merhaba", "Dunya"};
    cout << kelime <<endl;

    list<string> kelime2(kelime);  //kelime'ü kelime2'ye atar.
    cout << kelime2 <<endl;

    list<string> kelime3(kelime.begin(), kelime.end()); // kelimenin başlangıcından sonuna kelime3'e atar.
    cout << kelime3 <<endl;

    list<string> kelime4(5, "Merhaba"); //5 tane Mo ekler
    cout << kelime4 <<endl;
}