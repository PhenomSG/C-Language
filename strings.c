// initializing strings

#include <stdio.h>
int main()
{
    char name[10] = "Sahaj";    // other values will be garbage
    char name1[] = {'S','a','h','a','j','\0'};
    char name2[20];
    char name3[20];
    
    printf("Enter String: ");
    gets(name3);
    printf("\n%s",name3);
    
    printf("\nEnter String: ");
    scanf("%s",name2);
    printf("\n%s",name2);
    
    printf("\n%s",name);
    printf("\n%s",name1);

    // difference between scanf and gets
    // scanf does not read space

}