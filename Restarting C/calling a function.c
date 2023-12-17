#include <stdio.h>

// Calling a function
// 1. call by value
// 2. call by reference

//1. call by value
void fun(int,int);
void main()
{
    int x,y;
    x = 5;
    y = 7;
    fun(x,y);
    printf("%d ,%d",x,y);
}
void fun(int x,int y)
{
    x = 7;
    y = 5;
    printf("%d ,%d",x,y);
}