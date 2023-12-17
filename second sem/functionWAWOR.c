#include <stdio.h>

void sum(int,int);      // function declaration

void main()
{
    int a=5,b=6;
    sum(a,b);      //function calling
}

void sum(int a,int b)
{
    int c;
    c = a + b;
    printf("%d",c);
}