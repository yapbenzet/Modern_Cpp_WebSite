#include <tuple> // Tuple kullanmak icin gerekli
#include <string>
#include <iostream>

std::tuple<int, int> maketuple(int x, int y) //Fonksiyondan tuple dondurme
{
	//make_tuple fonksiyonu ile birlikte fonksiyonlardan tuple dondurulebilir.

	// return {x,y}; //C++17 ile birlikte gecerli bir kullanimdir.
	return std::make_tuple(x, y); 
}

int main()
{
	// Tuple tanimlarken <> arasina tuple'in tutacagi verilerin türlerini yazariz. 
	// Sonrasinda tuple'a ad veririz ve parantez icerisinde verilerin degerlerini gireriz.
	std::tuple<int, std::string, std::string> ogrenci( 150200100,"ornek", "ogrenci");


	//auto ile birlikte otomatik olarak tuple'in tutacagi verilerin türleri cözülebilir.
	auto ogrenci2 = std::make_tuple(15055050, "ali", "veli"); // Bu kullaným da geceridir.

	//get fonksiyonu ile tuple icerisindeki verilere erisilebilir.
	//bunun icin <> icinde erisilecek verinin indisi girilir.
	//Prarntez icine de verinin bulundugu tuple'in adi girilir.
	std::cout << "ogrenci no: "    << std::get<0>(ogrenci) << "\n"
		      << "ogrenci adi: "   << std::get<1>(ogrenci) << "\n"
		      << "ogrenci soyad: " << std::get<2>(ogrenci) << std::endl;

	std::cin.get();
	return 0;
}