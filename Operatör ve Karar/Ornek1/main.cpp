#include <iostream>

int main() {
    unsigned int a = 60;	  // 60 = 0011 1100
    unsigned int b = 13;	  // 13 = 0000 1101
    int c = 0;

    c = a & b;             // 12 = 0000 1100
    std::cout << "c: a&b (AND): " << c << std::endl ;

    c = a | b;             // 61 = 0011 1101
    std::cout << "c: a|b (OR): " << c << std::endl ;

    c = a ^ b;             // 49 = 0011 0001
    std::cout << "c:a^b (XOR): " << c << std::endl ;

    c = ~a;                // -61 = 1100 0011
    std::cout << "c:~a (NOT): " << c << std::endl ;

    c = a << 2;            // 240 = 1111 0000

    //a'yı 2 bit sola kaydırıp c'ye atar
    std::cout << "c:a<<2:  " << c << std::endl ;
    c = a >> 2;            // 15 = 0000 1111
    //a'yı 2 bit sağa kaydırıp c'ye atar.
    std::cout << "c:a>>2: " << c << std::endl ;
    return 0;
}