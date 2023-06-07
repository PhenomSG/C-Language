#include <stdio.h>

int sum(void);      // function declaration

void main()
{
    int r;
    r = sum();      //function calling
    printf("%d",r);
}

int sum()
{
    int a=5,b=6;
    int c;
    c = a + b;
    return c;
}