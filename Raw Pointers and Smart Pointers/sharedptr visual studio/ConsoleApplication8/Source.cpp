#include <iostream>
#include <memory>

class stuff
{
public:
	stuff() { std::cout << "nesne olusturuldu" << std::endl; }
	~stuff() { std::cout << "nesne yok edildi" << std::endl; }
};

int main()
{
	std::shared_ptr<stuff> stu(new stuff);

	{
		std::shared_ptr<stuff> stu2(stu);

		//Kopyalama islemi yapiliyor. Copy initialization
		std::cout << "bir shared_ptr yok edildi\n";

	} //stu2 kapsam disi ama veri yok edilmedi.

	std::cout << "baska bir shared_ptr yok edildi.\n";

	std::cin.get();
	return 0;
}//stu kapsam disi ve veri yok edildi.