#include <stdio.h>
#include <conio.h>
void main()
{
    int a=5,b,c,d;
    b=++a;
    c=a++;
    d=++a;
    printf("\n%d",a);
    printf("\n%d",b);
    printf("\n%d",c);
    printf("\n%d",d);
    /*  a   b   c   d
        5   0   0   0
        6   6   0   0
        7   6   6   0
        8   6   6   8
    */
}