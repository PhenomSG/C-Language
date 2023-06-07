#include <stdio.h>

int *returnptr(int[]);

void main()
{
    int *p;
    int a[] = {1,2,3,4,5};
    p=returnptr(a);
    printf("%d",*p);
}

int *returnptr(int a[])
{
    a = a + 2;
    return a;
}