#include <iostream>
#include <vector>//Vector kütüphanesini kullanmak için

int main()
{
    std::vector<int> vec; // ilk tanımlama, vec.size()=0 size() fonksiyonu vectorun boyutunu verir.
    std::vector<int>::iterator iter;// Vector iterator tanımı //
    std::vector<int>::reverse_iterator r_iter;
    for(int i=0;i<5;i++)
    {
        vec.push_back(i+1);//
    }
    std::cout<<"Vectordeki elemanlar: (end ve begin ile):    ";

    for (iter=vec.begin(); iter!=vec.end(); ++iter)
    {
        std::cout<<*iter<<"\t";
    }
    std::cout<<"\n";
    std::cout<<"Vectordeki elemanlar: (rend ve rbegin ile):  ";
    for(r_iter=vec.rbegin(); r_iter!=vec.rend(); ++r_iter)
    {
        std::cout<<*r_iter<<"\t";
    }
    return 0;
}