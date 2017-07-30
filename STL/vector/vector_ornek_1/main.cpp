#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
int main ()
{
    using namespace std;
    cout << "Her satira bir sayi girin. Cikmak icin CTRL-d tusuna basin\n";
    vector <int> sayilar;

    copy (istream_iterator<int> (cin), istream_iterator<int> (),  // kaynak
          back_inserter (sayilar));                              // hedef

    sort (sayilar.begin (), sayilar.end ());

    cout << "Siralanmis hali: ";

    copy (sayilar.begin (), sayilar.end (), ostream_iterator <int> (cout, " "));

    cout << endl;

    return 0;
}