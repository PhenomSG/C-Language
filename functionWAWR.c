#include <stdio.h>

int sum(int,int);      // function declaration

int main()
{
    int a=5,b=6;
    int r;
    r = sum(a,b);      //function calling
    printf("%d",r);
}

int sum(int a,int b)
{
    int c;
    c = a + b;
    return c;
}