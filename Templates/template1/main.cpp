#include <iostream>

using namespace std;

template <typename T>
const T& max(const T& x, const T& y){
    return (x > y) ? x : y;
}

int main(){
    int i = max(3,7); //7 döndürür
    cout << i << endl;

    double d = max(6.34,18.523); //18.523 döndürür
    cout << d << endl;

    char ch = max('a', '6'); // 'a' döndürür
    cout << ch << endl;

    return 0;
}