#include <stdio.h>

int main()
{
    char a[20] = "SaHaJ";
    char b[20] = "sAhAj";
    int i;
    printf("\nOriginal String is: %s",a);
    
    // for lowercase
    for ( i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z' )
        {
            a[i] = a[i] + 32;
        }
    }
    printf("\nLowercase String is: %s",a);

    // for uppercase
    printf("\nOriginal String is: %s",b);
    for ( i = 0; b[i] != '\0'; i++)
    {
        if (b[i] >= 'a' && b[i] <= 'z' )
        {
            b[i] = b[i] - 32;
        }
    }
    printf("\nUppercase String is: %s",b);
}