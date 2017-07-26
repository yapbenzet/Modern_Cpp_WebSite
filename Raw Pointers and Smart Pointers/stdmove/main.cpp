#include <memory> // for std::unique_ptr
#include <iostream>

class Kaynak
{
public:
    Kaynak()
    {
        std::cout << "Kaynak alindi\n";

    }

    ~Kaynak()
    {
        std::cout << "Kaynak yok edildi\n";

    }

    friend std::ostream& operator<<(std::ostream& out, const Kaynak&  res)
    {
        out << "Bu bir kaynaktir\n";

        return out;

    }

};

void KaynakKullan(const std::unique_ptr<Kaynak> res)
{
    if (res)
        std::cout << *res;

} // Kaynak burada yok edilir.

int main()
{

    auto ptr = std::make_unique<Kaynak>();

    KaynakKullan(std::move(ptr));

    std::cout << "Program bitiyor\n";
    return 0;


}