#include <iostream>
#include <list>
/**
 * Birlestirilmis siralama
 */
using namespace std;
ostream& operator<<(ostream& ostr, const list<int>& list)
{
    for (auto &i : list) {
        ostr << " " << i;
    }
    return ostr;
}
int main()
{
    list<int> liste1 = { 3,9,0,1,3 };
    list<int> liste2 = { 7,7,2,5,4 };

    liste1.sort();
    //sort(): Siralar.
    liste2.sort();
    cout << "liste1:  " << liste1 << endl;
    cout << "liste2:  " << liste2 << endl;
    
    liste1.merge(liste2);
    //merge(): Birlestirir.
    cout << "Birlestirilmis hali: " << liste1 << endl;
}