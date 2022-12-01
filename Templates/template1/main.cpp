#include <iostream>
using namespace std;

namespace yapbenzet
{
template <typename T>
T myMax(T x, T y)
{
    return (x > y)? x: y;
}

template <typename T>
const T& max(const T& x, const T& y){
    return (x > y) ? x : y;
}
}

int main(){
    int i = yapbenzet::myMax(3,7); //7 döndürür
    cout << i << endl;

    double d = yapbenzet::max(6.34,18.523); //18.523 döndürür
    cout << d << endl;

    char ch = yapbenzet::max('a', '6'); // 'a' döndürür
    cout << ch << endl;

    return 0;
}

