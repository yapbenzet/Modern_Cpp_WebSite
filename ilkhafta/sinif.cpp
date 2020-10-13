//tekrarlanan include ifadelerinden dolayı sorun olmasın.


#include <iostream>
#include "sinif.hpp"


sinif::sinif() { x =0 ; y = 0;}

sinif::sinif(int x, int y) { this->x = x ; this->y=y;}

void sinif::ekrana_yazdir() const
{
    std::cout<<"x = " << x << "y= "<< y << std::endl;
}
