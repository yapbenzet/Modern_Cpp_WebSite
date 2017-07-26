#include <iostream>
#include <fstream>

int main()
{
    class temp
    {
    public:
        double minimum, maximum;

        // Constructor (yapıcı fonksiyon)
        temp(double min = 0.0, double max = 0.0)
                : minimum(min), maximum(max)
        {}
        //Dosyaya yazmak için
        void write(std::ostream & os)
        {
            os.write((char*)&minimum, sizeof(double));
            os.write((char*)&maximum, sizeof(double));
        }
        //Dosyadan okumak için
        void read(std::istream & is)
        {
            is.read((char*)&minimum, sizeof(double));
            is.read((char*)&maximum, sizeof(double));
        }
    };
    std::ofstream ofile("temp.bin", std::ios_base::binary);
    if (ofile.is_open())
    {
        temp(-2.5, 7.5).write(ofile);
        temp(0, 9.9).write(ofile);
        temp(2.5, 11.0).write(ofile);
        temp(5.5, 14.5).write(ofile);
        temp(7.0, 17.7).write(ofile);
        temp(10.5, 23.7).write(ofile);
        temp(11.7, 29.5).write(ofile);
        temp(7.6, 22.9).write(ofile);
        temp(7.2, 21.5).write(ofile);
        temp(2.0, 16.0).write(ofile);
        temp(-4.7, 12.5).write(ofile);
        temp(-1.9, 8.5).write(ofile);
        ofile.close();
    }
    else
    {
        std::cerr << "Dosya acilamadi." << std::endl;
    }
    return 0;
}