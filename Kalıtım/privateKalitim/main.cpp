#include <iostream>

class Base
{
public:
    int m_public;
private:
    int m_private;
protected:
    int m_protected;

};
class Pri: private Base
{

public:

    Pri()
    {
        m_public = 1; // doğru
        m_private = 2; // yanlış: türetilmiş sınıflar ana sınıftaki private'a erişemez
        m_protected = 3; // doğru

    }

};
int main()
{

    Base base;

    base.m_public = 1; // doğru
    base.m_private = 2; // yanlış: m_private Base sınıfında private'dır
    base.m_protected = 3; // yanlış: m_protected Base sınıfta protected'dır

    Pri pri;
    pri.m_public = 1; // yanlış: m_public artık private'dır
    pri.m_private = 2; // yanlış: m_private artık erişilemezdir
    pri.m_protected = 3; // yanlış: m_protected artık private'dır

    return 0;
}