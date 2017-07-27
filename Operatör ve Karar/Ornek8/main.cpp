#include <iostream>

using namespace std;
int main()
{
    int sayi;
    cout << "1-7 arasinda sayi giriniz: ";
    cin >> sayi;
    switch (sayi)
    {
        case 1:
            cout << "Pazartesi" << endl;
            break;
        case 2:
            cout << "Sali" << endl;
            break;
        case 3:
            cout << "Carsamba" << endl;
            break;
        case 4:
            cout << "Persembe" << endl;
            break;
        case 5:
            cout << "Cuma" << endl;
            break;
        case 6:
            cout << "Cumartesi" << endl;
            break;
        case 7:
            cout << "Pazar" << endl;
            break;
        default:
            cout << "Girilen sayi 1-7 araliginda degildi." << endl;
            break;
    }
    system("pause");
    return 0;
}