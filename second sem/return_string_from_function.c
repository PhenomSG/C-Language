#include <stdio.h>

char * display(void);

void main()
{
    char * str;
    str=display();
    printf("The string: %s",str);
}

// we cannot actually return a string
//we return the pointer to the first character of the string
char * display()
{
    return "Jenny";      
}