// pointer to function
// function pointer contains all the code

// declaration
// DataType(* pointer name)(DataType of arguement)

// difference btw them is very important
// int * ptr(int,int) -> this means ptr is a function as it belongs to () not * due to OPERATOR PRECEDENCE
// int (* ptr)(int,int) -> here, ptr is a function pointer which accepts 2 integer arguements

#include <stdio.h>

int sum(int,int); // fun declaration

void main()
{
    int s = 0;
    int (*ptr)(int,int) = &sum;
    s = (*ptr)(2,3);
    printf("%d",s);
}
int sum(int a,int b)
{
    return a+b;
}