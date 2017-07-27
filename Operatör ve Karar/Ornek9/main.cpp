#include <iostream>
#include <string>
/**
 * Girilen 2 sayidan büyük olani yazmaktadir.
 */
using namespace std;
int max(int sayi1, int sayi2)  {
    return (sayi1>sayi2)? sayi1 : sayi2;
}
int main()
{
    int x, y;
    cout << "2 sayi giriniz ";
    cin >> x >> y;
    cout << max(x, y);
    return 0;
}