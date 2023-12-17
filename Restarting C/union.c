// union is a user defined data type
//not used now a days

#include <stdio.h>

union demo
{
    int a;
    char b;
    float c;
};

int main()
{
    union demo u;
    u.a = 1;
    u.b = 'a';
    u.c = 3;

    printf("a = %d\n", u.a);
    printf("b = %c\n", u.b); 
    printf("c = %f", u.c);   
    
    return 0;
}
