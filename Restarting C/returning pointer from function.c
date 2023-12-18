// returning pointer from function

#include <stdio.h>
// fun declaration
int * rtrptr(int[]);

void main()
{
    int * p;
    int a[] = {1,2,3,4,5};
    p = rtrptr(a);
    printf("%d",*p);
}

int * rtrptr(int a[])
{
    a = a + 2;
    return a;
}