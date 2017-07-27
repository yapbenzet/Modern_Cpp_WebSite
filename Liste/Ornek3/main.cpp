#include <string>
#include <list>
#include <iostream>

using namespace std;
int main()
{
    list<string> names;

    names.push_back("Tom");
    names.push_back("Dick");
    names.push_back("Harry");
    names.push_back("Juliet");

    list<string>::iterator pos;
    pos = names.begin();
    pos++;
    pos++;
    pos++;

    names.insert(pos, "Romeo"); // Bastan ucuncuden sonrakine ekleme yap.

    for (pos = names.begin(); pos != names.end(); pos++)
        cout << *pos << "\n";
    cout << endl;

    pos = names.begin();
    pos++;

    names.erase(pos); //Bastan bir sonrakini sil

    for (pos = names.begin(); pos != names.end(); pos++)
        cout << *pos << "\n";

    return 0;
}