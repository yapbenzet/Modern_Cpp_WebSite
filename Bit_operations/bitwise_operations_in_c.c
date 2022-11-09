//
// Created by Burak İnner on 1.11.2022.
//
#include <stdio.h>

int main() {

    unsigned int a = 60;	/* 60 = 0011 1100 */
    unsigned int b = 13;	/* 13 = 0000 1101 */
    int c = 0;

    c = a & b;              /* 12 = 0000 1100 */
    printf("Line 1 - Value of c is %d\n", c );

    c = a | b;       /* 61 = 0011 1101 */
    printf("Line 2 - Value of c is %d\n", c );

    c = a ^ b;       /* 49 = 0011 0001 */
    printf("Line 3 - Value of c is %d\n", c );

    c = ~a;          /*-60 = 1100 0011 */
    printf("Line 4 - Value of c is %d\n", c );

    c = a << 2;     /* 240 = 1111 0000 */
    printf("Line 5 - Value of c is %d\n", c );

    c = a >> 2;     /* 15 = 0000 1111 */
    printf("Line 6 - Value of c is %d\n", c );


    int n = 399;
    int y = 0xABCDEF;

    /* Upper and lower case. */

    printf ("%X hexadecimal with upper case letters.\n", n);
    printf ("%x hexadecimal with lower case letters.\n", n);

    /* Different kinds of padding. */

    printf ("<%8x> hexadecimal padded with blanks to width 8.\n", n);
    printf ("%04x hexadecimal padded with four leading zeros.\n", n);
    printf ("%08x padded with eight leading zeros.\n", n);

    /* Hash mark, #, adds 0x to number. */

    printf ("%#x automatically add 0x.\n", y);
    printf ("%#X, capital X, automatically add 0X.\n", y);
    printf ("%#X, but don't add 0X if zero.\n", 0);

    /* Hash mark plus padding. */

    printf ("%#8x - no padding is added with #.\n", y);
    printf ("%#8X - no padding is added with #.\n", y);
    printf ("%#08X - padding is added with 0, but don't add 0X.\n", 0);
    printf ("%#08X - padding is added with 0, but don't add 0X.\n", -1);
    printf ("%#8X - padding is added with 0, but don't add 0X.\n", (int)-1);
    long sayi = -1;
    printf ("%#8lX - padding is added with 0, but don't add 0X.\n", sayi);





    int x = 345;
    const char *chy = "monkeys";

    /* Demonstrate with numbers. */
    printf ("<%d> is not justified.\n", x);
    printf ("<%5d> is right-justified.\n", x);
    printf ("<%-5d> The minus sign makes it left-justified.\n", x);
    /* Demonstrate with strings. */
    printf ("'%s' is not justified.\n", chy);
    printf ("'%10s' is right-justified.\n", chy);
    printf ("'%-10s' is left-justified using a minus sign.\n", chy);
}