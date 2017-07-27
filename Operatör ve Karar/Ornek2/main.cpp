#include <iostream>
/**
 *  Global ve lokal degisken atama
 */
using namespace std;
int x{5}; // Global degisken
int main()
{
    int x{10}; // Lokal degisken
    cout << x << endl;
    cout << ::x << endl;
    return 0;
}