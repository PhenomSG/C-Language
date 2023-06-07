#include <stdio.h>
int main()
{
    char name[20] = "sahaj";
    int i,count;
    i=count=0;
    while (name[i] !='\0')
    {
        count++;
        i++;
    }
    printf("The length of string is %d",count);
    
}