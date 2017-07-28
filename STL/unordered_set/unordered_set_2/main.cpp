
//unordered sete, oluşturulan integer dizideki elemanların tekrarsız olarak eklenmesini sağlar
#include <bits/stdc++.h>///
void Tekrarsiz_yaz(int arr[], int n)
{
    std::unordered_set<int> intSet;
    std::unordered_set<int> tekrarsiz_set;
    for (int i = 0; i < n; i++)
    {

        //Daha once eklenip eklenmedigini kontrol eder
        if (intSet.find(arr[i]) == intSet.end())
            intSet.insert(arr[i]);
        else
            tekrarsiz_set.insert(arr[i]);
    }
    std::cout << "Tekrarsiz Dizi: ";
    std::unordered_set<int> :: iterator itr;
    for (itr = tekrarsiz_set.begin(); itr != tekrarsiz_set.end(); itr++)
        std::cout << *itr << " ";
}

int main()
{
    int dizi[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    int n = sizeof(dizi) / sizeof(int);//Dizideki eleman sayısını verir.
    std::cout<<"Eleman sayisi:"<<n<<std::endl;
    Tekrarsiz_yaz(dizi, n);//
    return 0;
}