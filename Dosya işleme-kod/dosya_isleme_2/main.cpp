#include <iostream>
#include <fstream>
int main()
{
   std::ifstream ifile("file1.txt");
    if (ifile.is_open())
    {
        std::string line;
        while (std::getline(ifile, line))
        {
            std::cout << line << std::endl;
        }
        ifile.close();
        std::cout << "Dosya okuma islemi bitti." << std::endl;
    }
    else
    {
        std::cerr << "Dosya acilamiyor." << std::endl;
    }
}