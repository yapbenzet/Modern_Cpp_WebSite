#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> deq1;
    deque<int> deq2;
    deque<int> deq3;

    deq1.assign(7, 100); //deq1'e 7 adet 100 değeri atar
    //assign() eski değerleri siler ve yeni değerler ekleyip boyutunu ayarlar

    auto itr = deq1.begin() + 1;

    deq2.assign(itr, deq1.end()-1);

    int dizi[] = {8, 23, 42};
    deq3.assign(dizi, dizi+3);//Diziden atama

    cout << "deq1 boyut: " << deq1.size() << endl;
    cout << "deq2 boyut: " << deq2.size() << endl;
    cout << "deq3 boyut: " << deq3.size() << endl;

    return 0;
}