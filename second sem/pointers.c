#include <stdio.h>

int main()
{
    int a=9,b=10,c;
    int * p,*q;
    p=&a;
    q=&b;
    printf("Value of a : %d",a);
    printf("\nAddress of a : %d",p);
    printf("\nAddress of p : %d",&p);
    printf("\nValue of a : %d",*p);
    printf("\nAddress of a : %d",&a);

    c=*q;
    *p=20;
    printf("\nValue of c : %d",c);
    printf("\nAddress of c : %d",&c);
    printf("\nAddress of q : %d",&q);
    printf("\nValue of p : %d",*p);
    printf("\nAddress of p : %d",&p);

}