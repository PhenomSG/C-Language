#include <stdio.h>

void concat(char[],char[]);

int main()
{
    char a[20] = "Sahaj";
    char b[20] = "Gupta";
    concat(a,b);    
}

void concat(char a[],char b[])
{
    char c[40];

    int i;
    int count;
    i=count=0;

    while (a[i] != '\0')
    {
        c[count]=a[i];
        count++;
        i++;
    }

    i=0;

    while (b[i] != '\0')
    {
        c[count]=b[i];
        count++;
        i++;
    }
    c[count]='\0';

    printf("\nString 1: %s",a);
    printf("\nString 2: %s",b);
    printf("\nString 3: %s",c);
    
}