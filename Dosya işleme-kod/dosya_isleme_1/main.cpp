#include <fstream>
void openCloseFilesExplicitly()
{
    std::ofstream ofile;
    std::ifstream ifile;
    std::fstream  iofile;

    ofile.open("file1.dat"); //Yazma işlemi için //file1 dosyasını açar
    ifile.open("file2.dat");  //Okuma işlemi için //file2 dosyasını açar
    iofile.open("file3.dat");//Hem yazma hem de //okuma işlemi için file3 dosyasını açar

    ofile.close();
    ifile.close();
    iofile.close();
}
void openCloseFilesImplicitly()
{
    std::ofstream ofile("file1.dat");
    std::ifstream ifile("file2.dat");
    std::fstream  iofile("file3.dat");
}

int main()
{
    openCloseFilesExplicitly();
    openCloseFilesImplicitly();
    return 0;
}