#include <stdio.h>

int main()
{
    short int a = 32770;
    printf("%hd",a);        // -32766
    printf("\n");
    printf("%hu",a);        // 32770
    return 0;
}