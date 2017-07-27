#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> deq;
    deque<double> deq2 = {3.56, 85.42, 7.01};

    for(int i = 0; i <= 5; ++i)
        deq.push_back(i);

    for(int i = -1; i >= -5; --i)
        deq.push_front(i);

    for(auto itr = deq.cbegin(); itr != deq.cend(); ++itr)//cbegin ve cend constant iteratördür, bu iteratörler
        cout << *itr << " ";//read-only'dir yani değeri değiştirilemez, sadece yazdırılabilir

    cout << endl;

    for(auto itr = deq.crbegin(); itr != deq.crend(); ++itr)//rbegin ve rend reverse iteratördür, bu iteratörler
        cout << *itr << " ";//tersten başlayıp başa doğru ilerler. rbegin() ilk elemanın reverse'ü yani son eleman,
    //rend() son elemanın reverse'ü yani ilk elemanı gösterir.

    cout << endl;

    cout << "Boyut: " << deq.size() << endl;
    cout << "Maksimum Boyut: " << deq.max_size() << endl;

    if(deq2.empty())
        cout << "deq2 bostur." << endl;
    else
        cout << "deq2 bos degildir." << endl;

    deque<float> bosDeque;

    if(bosDeque.empty())
        cout << "Bu deque bostur." << endl;
    else
        cout << "Bu deque bos degildir." << endl;


    cout << "Resize ile buyutmeden once deq2: ";
    for(auto itr = deq2.cbegin(); itr != deq2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    deq2.resize(5);
    cout << "Resize ile buyuttukten sonra deq2: ";
    for(auto itr = deq2.cbegin(); itr != deq2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    deq2.resize(3);

    cout << "Resize ile kucultmeden once deq2: ";
    for(auto itr = deq2.cbegin(); itr != deq2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    deq2.resize(2);
    deq2.shrink_to_fit();//Bu fonksiyon resize ile deque küçültüldüğünde
    // çıkartılan elemanların hafızadan bırakılmasını(silinmesini) sağlar
    //Daha sonra resize ile boyutu 3 yapılırsa 3. eleman 0 olacaktır

    cout << "Resize ile kuculttukten sonra deq2: ";
    for(auto itr = deq2.cbegin(); itr != deq2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    cout << "deq'in ilk elemani: " << deq.front() << endl;
    cout << "deq'in son elemani: " << deq.back() << endl;
    cout << "deq'in 3. elemani" << deq.at(3) << endl;
    cout << "deq'in 5. elemani" << deq[5] << endl;


    cout << "ilk ve son elemani silinmeden once deq: ";
    for(auto itr = deq.cbegin(); itr != deq.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    deq.pop_front();
    deq.pop_back();

    cout << "ilk ve son elemani silindikten sonra deq: ";
    for(auto itr = deq.cbegin(); itr != deq.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    return 0;
}