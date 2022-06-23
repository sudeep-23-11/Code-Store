//BitwiseOperations
#include<stdio.h>
int main()
{
    unsigned short x, y, and, or, xor, not;
    unsigned short leftshift, rightshift, complement1, complement2;
    x=12;
    y=10;
    and=x&y;
    or=x|y;
    xor=x^y;
    not=~x;
    leftshift=x<<2;
    rightshift=x>>2;
    complement1=~x;
    complement2=complement1+1;
    printf("%hu %hu %hu %hu ", and, or, xor, not);
    printf("%hu %hu %hu %hu\n", leftshift, rightshift, complement1, complement2);
    return 0;
}