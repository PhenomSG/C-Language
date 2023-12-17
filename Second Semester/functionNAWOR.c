#include <stdio.h>

void sum(void);      // function declaration

void main()
{
    sum();      //function calling
}

void sum()
{
    int a=5,b=6;
    int c;
    c = a + b;
    printf("%d",c);
}