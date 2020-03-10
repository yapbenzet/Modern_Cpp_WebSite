// partition.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	// Vector tanımı
	vector<int> vect = { 2, 1, 5, 6, 8, 7 };
	is_partitioned(vect.begin(), vect.end(), [](int x)
	{
		return x % 2 == 0;

	})?
	cout << "Vector ayrilmis" :// is_partition fonksiyonundan true dönerse bu satır çalışır
	cout << "Vector ayrilmamis"; //is_parttion fonksiyonundan false dönerse bu satır çalışır
	cout << endl;
	//2 ye tam bölünen sayıları ayırır
	partition(vect.begin(), vect.end(), [](int x)//Ayırma,bölme, işlemi
	{
		return x % 2 == 0;

	});
	//Vectorun ayrılıp ayrılmadığını kontrol eder
	is_partitioned(vect.begin(), vect.end(), [](int x)
	{
		return x % 2 == 0;

	}) ?

     cout << "Vektor ayrildi, partitioned isleminin sonucunda" :
	cout << "Vektor hala ayrilamadi, partitioned isleminin sonucunda ";
	cout << endl;
	cout << "Ayrilmis hali: ";
	for (int &x : vect) cout << x << " ";
	cin.get();
	return 0;
}