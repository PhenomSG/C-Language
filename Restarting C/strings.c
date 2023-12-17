// string is an array of characters ending with a null character
// declaration -> char name[size]

#include <stdio.h>
#include <string.h>

int main()
{
    char name[10] = "Sahaj";
    char name1[] = {'S','a','h','a','j','\0'};
    printf("%s\n",name);
    printf("%d and %d",strlen(name),strlen(name1));
}


