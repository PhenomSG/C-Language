#include <stdio.h>
#include <string.h>

int main()
{
    char name[20]= "Sahaj Gupta";
    char c[20];
    int i,j;
    int l;

    l=strlen(name);
    printf("Length of string: %d",l);
    
    i = 0;
    j = l-1;
    while (j >= 0)
    {
        c[i] = name[j];
        i++;
        j--;
        printf("\n%d%d",i,j);
    }
    c[i]='\0';
    printf("\nReverse String: %s",c);
    printf("\nOriginal String: %s",name);
}