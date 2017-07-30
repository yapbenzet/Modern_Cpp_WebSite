#include <iostream>
#include <vector>
#include <algorithm>
int main ()
{
    using namespace std;
    cout << "Kolay yontemle vektordeki elemanlar siralanacak\n";
    cout << "Her satira bir sayi girin. Cikmak icin CTRL-d tusuna basin\n";
    vector <int> sayilar;
    int sayi = 0;
    while (cin >> sayi)
    {
        /*
         * Okunan sayıyı vektör topluluğunun arkasına ekle
         */
        sayilar.push_back (sayi);
    }

    sort (sayilar.begin (), sayilar.end ());

    cout << "Siralanmis hali: ";

    for (int i = 0; i < sayilar.size (); ++i)
        cout << sayilar [i] << ' ';
    cout << endl;

    return 0;
}