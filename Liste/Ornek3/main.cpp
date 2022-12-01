#include <string>
#include <list>
#include <iostream>

using namespace std;
int main()
{
    list<string> names;

    names.push_back("Tom");
    //push_back(): Sona eleman ekleme.
    names.push_back("Nick");
    names.push_back("Harry");
    names.push_back("Juliet");

    list<string>::iterator pos;
    pos = names.begin();
    //begin(): Ilk elemanin adresini atar.
    pos++;
    pos++;
    pos++;

    names.insert(pos, "Romeo"); // Bastan ucuncuden sonrakine ekleme yap.
    //insert(): Soylenen elemanin bulundugu yere atama yapilir. Digeri bir sonrakine aktarilir.

    for (pos = names.begin(); pos != names.end(); pos++)
    //end()= Son elemanin adresini dondurur.
        cout << *pos << "\n";
    cout << endl;

    pos = names.begin();
    pos++;

    names.erase(pos); //Bastan bir sonrakini sil

    for (pos = names.begin(); pos != names.end(); pos++)
        cout << *pos << "\n";

    return 0;
}