#include <array> // std::array icin
#include <iostream>
#include <algorithm> // std::sort icin

/*
std::array belli sayida veri tutabilen bir dizidir. Siniri bellidir. 
Sinir degerini template deger parametresi olarak alir.
*/

using namespace std;

void uzunlukYaz(const array<int, 5> &myArray)
{
	//arraylar her zaman referans ya da const referans olarak gonderilmeli


	cout << "uzunluk: " << myArray.size() << endl;
}



int main()
{
	// <> icindeki int arrayin tutacagi verilerin turudur. 5 ise arrayin tutabilecegi max deger sayisidir.
	array<int, 5> myArray;

	//arraylar initializer list ya da uniform initialization ile tanimlanabilir.
	array<int, 5> myArray2 = { 1,2,3,4,5 }; //initializer list
	array<int, 5> myArray3 { 5,4,3,2,1 }; // uniform initialization

	//Ayrica sonrasinda tekrardan initializer list ile atama yapilabilir.
	myArray = { 0, 1, 2, 3, 4 }; // uygun
	myArray = { 9, 8, 7 }; // uygun 3. ve 4. indisler sifir oldu.
	//myArray = { 0, 1, 2, 3, 4, 5 }; //uygun degil. Sinirlarin disina tasiyor


	//Array verilerine [] ile erisilebilir.
	cout << myArray[0] << "  " << myArray[4] << endl;
	// [] sinir kontrolu yapmaz. at() yapar.



	//cout << myArray.at(9);  //Exception atar.



	//at() ile atama da yapilabillir.
	myArray.at(1) = 42;

	//size() fonksiyonu arrayin boyutunu dondurur.
	cout << "arrayin boyutu = " << myArray.size() << endl;
	uzunlukYaz(myArray);


	//sinir bazli for donguleri arrayler ile calismaktadir
	for (auto &elem : myArray)
	{
		elem = elem * 2;
		cout << elem << " " ;
	}
	cout << endl;

	//Arrayleri std::sort ile siralayabiliriz.
	sort(myArray.begin(), myArray.end());

	for (const auto &elem : myArray)
	{
		elem = elem / 2;
		cout << elem << " ";
	}
	cout << endl;

	//front() ile ilk elemana erisilir.
	cout <<"ilk eleman: " << myArray.front() << endl;

	//back() ile son elemana erisilir.
	cout << "son eleman: " << myArray.back() << endl;


	//Arraylerin verilerine iteratorlar ile erisilebilir.
	//Eger veri degistirme olmayacaksa const iteratorlar kullanilmali
	//cbegin, cend, crbegin, crend

	for (auto iter = myArray.cbegin(); iter != myArray.cend(); ++iter)
	{
		cout << *iter << " ";
 	}
	cout << endl;

	//Reverse iterator ile arrayler tersten gezilebilir.
	for (auto r_iter = myArray.crbegin(); r_iter != myArray.crend(); ++r_iter)
	{
		cout << *r_iter << " ";
	}
	cout << endl;


	//fill fonksiyonu ile array istenilen bir deger ile doldurulabilir.
	myArray.fill(42);
	cout << "MY_ARRAY\n";
	for (const auto &elem : myArray)
	{
		cout << elem << " ";
	}
	cout << endl;


	//Swap fonksiyonu ile array icerisindeki veriler baska bir array ile degistirilebilir.
	cout<< "\n\nswap sonrasi\n"  << "MY_ARRAY\n";
	myArray.swap(myArray2);
	for (const auto &elem : myArray)
	{
		cout << elem << " ";
	}
	cout << "\nMY_ARRAY2\n";
	for (const auto &elem : myArray2)
	{
		cout << elem << " ";
	}
	cout << endl;


	cin.get();
    return 0;
}

