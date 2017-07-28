#include <iostream>
#include <set>

using namespace std;

int main() {

    multiset<int> multiset1;

    for (int i=1; i<=5; i++)
        multiset1.insert(i*10);

    auto itr = multiset1.insert(35);

    //insert'in ilk parametresine iteratör vermek eklerken daha verimli olmayı sağlayabilir
    itr = multiset1.insert(itr, 42);// Verimlilik artmıştır (42>35)
    itr = multiset1.insert(itr, 53); // Verimlilik artmıştır (53>42)
    itr = multiset1.insert(itr, 21); // Verimlilik değişmez (21<53)
    //Binary tree tarzı ekleme yapar. O(log(n))

    multiset1.emplace(20);
    itr = multiset1.emplace_hint(itr, 35);//Verimlilik artmıştır (35>20)

    for (auto itr = multiset1.cbegin(); itr != multiset1.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    for(auto itr = multiset1.crbegin(); itr != multiset1.crend(); ++itr)//rbegin ve rend reverse iteratördür, bu iteratörler
        cout << *itr << " ";//tersten başlayıp başa doğru ilerler. rbegin() ilk elemanın reverse'ü yani son eleman,
    //rend() son elemanın reverse'ü yani ilk elemanı gösterir.

    cout << endl;

    auto findItr = multiset1.find(42);//Diğer sequence konteynırlar bu özelliği içermez. O(log(n))

    cout << "multiset1.find(42): " << *findItr << endl;

    cout << "Boyut: " << multiset1.size() << endl;
    cout << "Maksimum Boyut: " << multiset1.max_size() << endl;

    cout << "muliset1 icerisinde " <<multiset1.count(20) << " adet 20 vardir" << endl;

    auto itr2 = multiset1.begin();
    ++itr2;

    multiset1.erase(itr2);//O(1) //Sequence konteynırların hiçbirinde böyle bir silme yöntemi yoktur
    multiset1.erase(35);//O(log(n))

    for (auto itr = multiset1.cbegin(); itr != multiset1.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;


    multiset1.erase(++itr2, --multiset1.end());

    for (auto itr = multiset1.cbegin(); itr != multiset1.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    multiset<int> multiset2 = {90, 70, 60, 80, 80};

    cout << "multiset2: ";
    for(auto itr = multiset2.cbegin(); itr != multiset2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    multiset1.swap(multiset2);

    cout << "Swap sonrasi multiset1: ";
    for(auto itr = multiset1.cbegin(); itr != multiset1.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    cout << "Swap sonrasi multiset2: ";
    for(auto itr = multiset2.cbegin(); itr != multiset2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    auto e_itr = ++multiset1.begin();
    //multiset1.extract(e_itr);//O(1) //extract() C++ 17 ile gelmiştir
    //multiset1.extract(80);//O(log(n)) //Node handle

    multiset2.insert(multiset1.extract(e_itr));//e_itr iteratörünün işaret ettiği değer basit bir işlemle multiset1'den multiset2'ye taşındı

    for(auto itr = multiset1.cbegin(); itr != multiset1.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    multiset2.merge(multiset1);//O(n*log(n)) //merge() C++ 17 ile gelmiştir
    //Node handle

    for(auto itr = multiset2.cbegin(); itr != multiset2.cend(); ++itr)
        cout << *itr << " ";

    cout << endl;

    return 0;
}