#include <iostream>
class sq_t
{
public:
    typedef double value_type;

    value_type operator()(double x) const
    {
        return x*x;
    }
};

const sq_t sq = sq_t();

int main ()
{
    double x = sq(3.14);

    std::cout << "Hello World\n";
    std::cout << "x = "<< x << std::endl;
}
