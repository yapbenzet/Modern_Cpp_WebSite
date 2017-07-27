#include <iostream>
/**
 * Bir sayinin pozitif negatifligini söylenmektedir.
 */
using namespace std;
int main()
{
    int sayi;
    cin >> sayi;
    if(sayi > 0)
        cout << "Sayi pozitif";
    else if(sayi < 0)
        cout << "Sayi negatif";
    else cout << "Sifir";
    return 0;
}