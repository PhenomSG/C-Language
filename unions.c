#include <stdio.h>

union abc
{
    int a;
    char c;
    float b;
};

void main()
{
    union abc u;
        u.a = 9;
        u.c = 'a';
        u.b = 9.89;
    
    printf("a = %d",u.a);
    printf("\nb = %f",u.b);
    printf("\nc = %c",u.c);
}