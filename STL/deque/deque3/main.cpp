#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> deq;

    for(int i = 1; i <= 5; ++i)
        deq.push_back(i);// O(1)

    cout << "Insert oncesi deq: ";
    for(auto itr = deq.cbegin(); itr != deq.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    auto itr = deq.begin() + 1;

    deq.insert(itr,10);//Ortaya ekleme (yavaş): O(n)

    cout << "Insert sonrasi deq: ";
    for(auto itr = deq.cbegin(); itr != deq.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    deq.erase(deq.end()-2);
    cout << "'4' elemani silindikten sonra deq: ";
    for(auto itr = deq.cbegin(); itr != deq.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    deq.erase(deq.begin()+1, deq.begin()+4);
    cout << "Ortadaki 3 eleman silindikten sonra deq: ";
    for(auto itr = deq.cbegin(); itr != deq.cend(); ++itr)
        cout << *itr << " ";


    return 0;
}