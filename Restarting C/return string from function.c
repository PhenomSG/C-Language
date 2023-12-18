// very very important
// returning string from function
// 

# include <stdio.h>

char * display();

void main()
{
    char * str;
    str = display();
    printf("String is %s",str);
}
char * display()
{
    return "Jenny"; // stored in seperate memory location which you can read only
                    // we an access even after execution of function
}
