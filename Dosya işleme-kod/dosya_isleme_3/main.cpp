#include <iostream>
#include <fstream>

int main()
{
    std::ofstream ofile("metindosyasi.txt");
    if (ofile.is_open())
    {
        ofile << "John" << " " << 42 << " " << 1.67 << std::endl;
        ofile << "Jane" << " " << 41 << " " << 1.54 << std::endl;
        ofile << "Bill" << " " << 35 << " " << 1.82;
        ofile.close();
    }
    else
    {
        std::cerr<< "metindosyasi.txt dosyasi acilamamaktadir. " << std::endl;
    }
    return 0;
}