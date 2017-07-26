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

class Pub: public Base
{
public:
    Pub()
    {
        m_public = 1; // doğru
        m_private = 2; // yanlış: m_private türetilmiş sınıftan erişilemez
        m_protected = 3; // doğru

    }

};

int main()
{
    Base base;
    base.m_public = 1; // doğru
    base.m_private = 2; // yanlış: m_private erişilemez
    base.m_protected = 3; // yanlış: m_protected doğrudan erişilemez

    Pub pub;
    pub.m_public = 1; // doğru
    pub.m_private = 2; // yanlış: m_private Pub tarafından erişilemez
    pub.m_protected = 3; // yanlış: m_protected doğrudan erişilemez
}