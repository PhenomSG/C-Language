#include <stdio.h>
#include <string.h>

int main()
{
    char s[10] = "Sahaj";
    int i;
    for(i=0;s[i]!='\0';i++)
    {}
    int j=0;
    while (s[j]!='\0')
    {
        j++;
    }
    
    printf("Length of string is %d\n",i);
    printf("Length of string is %d\n",j);
    printf("Length of string is %d",strlen(s));
}