#include <iostream>
/**
 * Kapsam çözünürlük operatörü ile farklı ad uzayina erisim
 */
namespace foo
{
    int x;
}
int main()
{
    int x=1;
    std::cout << "foo = "; // std ad uzayindan cout nesnesi cagrilmaktadir.
    foo::x = 5; // Olusturulan foo ad uzayindan x nesnesine atama yapilir.

    std::cout << foo::x << std::endl;
    return 0;
}