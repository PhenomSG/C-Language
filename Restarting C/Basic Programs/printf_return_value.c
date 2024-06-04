#include <stdio.h>
int main()
{
    int a = 4, b = 3;
    printf("%d%d\n",a++,++b); //Output: 44
    int c = 4;
    printf("%d%d",++c,c++); // Output: 64
    // No rule in C in what order parameter are passed
}