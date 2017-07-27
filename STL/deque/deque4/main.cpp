#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> deque1 = {10, 20, 30, 40, 50, 60, 70};
    deque<int> deque2 = {99, 88, 77};
    deque<double> doubleDeque = {3.14, 12.78};

    //deque1.swap(doubleDeque); //Tip uyuşmazlığı: int deque ile double deque swap edilemez

    cout << "deque1: ";
    for(auto itr = deque1.cbegin(); itr != deque1.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    cout << "deque2: ";
    for(auto itr = deque2.cbegin(); itr != deque2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    deque1.swap(deque2);//deque1 ile deque2 içeriği yer değiştirir

    cout << "Swap sonrasi deque1: ";
    for(auto itr = deque1.cbegin(); itr != deque1.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    cout << "Swap sonrasi deque2: ";
    for(auto itr = deque2.cbegin(); itr != deque2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    deque2.clear();//deque2'nin içerisindeki her şey silinir
    deque2.push_front(-5);

    cout << "clear() ve push_front(-5) sonrasi deque2: ";
    for(auto itr = deque2.cbegin(); itr != deque2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    deque2.emplace_front(1);
    deque2.emplace_back(10);
    deque2.emplace(deque2.begin()+1, 5);

    cout << "deque2.emplace_front(1); deque2.emplace_back(10); deque2.emplace(deque2.begin()+1, 5);  : ";
    for(auto itr = deque2.cbegin(); itr != deque2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    return 0;
}