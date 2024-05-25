// solution to all problems
// static provides global scopes
// string is modifibale now

#include <stdio.h>
char * display();
void main()
{
    char * str;
    str = display();
    str[0] = 'z';
    printf("String is %s",str);
}
char * display()
{
    static char str[] = "Sahaj";
    return str;
}