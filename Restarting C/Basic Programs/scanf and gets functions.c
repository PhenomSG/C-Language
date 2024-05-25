#include <stdio.h>
#include <string.h>
int main()
{
    // scanf function
    char s[10];
    printf("Enter name: ");
    scanf("%s",s);
    printf("%s\n",s);

    // gets function
    char s1[15];
    printf("Enter new name: ");
    gets(s1);
    printf("%s",s1);

 // for both scanf and gets there is a drawback called BUFFER OVERFLOW
 // even if space is low it will save all the input by earsing other data which is dangerous   

    // fgets function
    char s2[15];
    printf("Enter new name: ");
    fgets(s2, sizeof(s2), stdin);  // Use fgets for safer input
    s2[strcspn(s2, "\n")] = '\0';  // Remove trailing newline character
    printf("%s\n", s2);

}