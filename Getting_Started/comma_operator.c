#include <stdio.h>
int main()
{
    int a;
    a=5,4;  // it takes 5 then removes it and takes 4
    printf("a is %d",a);
    a=(5,4); // it saves 5 as per operator precedence
    printf("\na is %d",a);
}
