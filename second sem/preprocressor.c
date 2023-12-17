#include <stdio.h>

#define MUL(a,b) a*b

#define MAX(a,b) if(a,b) \
printf("a is max"); \
else \
printf("b is max");

int main()
{
    printf("%d\n",MUL(2,3));
    MAX(5,6);
    return 0;
}