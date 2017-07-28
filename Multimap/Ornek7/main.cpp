#include <iostream>
#include <map>
#include <vector>

using namespace std;

class TelephoneDirectory
{
public:

    void add_entry(string name, int number);
    int find_entry(string name);
    vector<string> find_entries(int number);
    void print_all();

private:
    map<string, int> database;
    multimap<int, string> inverse_database;
};

void TelephoneDirectory::add_entry(string name, int number)  //Kisi ekle.
{
    database[name] = number;
    inverse_database.insert(make_pair(number, name));
}

int TelephoneDirectory::find_entry(string name)  //Isme ait numarayi dondurur
{
    map<string, int>::iterator p = database.find(name);
    if (p == database.end())  // Veri tabaninin sonuna kadar kontrol eder.
        return 0; // not found
    else
        return p->second;
}

vector<string> TelephoneDirectory::find_entries(int number) //Numaraya tanimli kisileri dondurur.
{
    multimap<int, string>::iterator lower
            = inverse_database.lower_bound(number); //Gonderilen numaraya tanimli ilk kisiye esitler.
    multimap<int, string>::iterator upper
            = inverse_database.upper_bound(number); //Gonderilen numaraya tanimli son kisiye esitler.
    vector<string> result;

    for (multimap<int, string>::iterator pos = lower; //Numaraya tanimli kisileri bastirir.
         pos != upper; pos++)
        result.push_back(pos->second);
    return result;
}

void TelephoneDirectory::print_all()  //Baslangıctan sona kadar rehberi yazdirir.
{
    for (map<string, int>::iterator pos = database.begin();
         pos != database.end(); pos++)
    {
        cout << pos->first << ": " << pos->second << "\n";
    }
}

int main()
{
    TelephoneDirectory data;
    data.add_entry("Fred", 7235591);
    data.add_entry("Mary", 3841212);
    data.add_entry("Sarah", 3841212);
    cout << "Number for Fred: " << data.find_entry("Fred") << "\n";
    vector<string> names = data.find_entries(3841212);
    cout << "Names for 3841212: ";
    for (unsigned int i = 0; i < names.size(); i++)
        cout << names[i] << " ";
    cout << "\n";
    cout << "All names and numbers:\n";
    data.print_all();
    return 0;
}

