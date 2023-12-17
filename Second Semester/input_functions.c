#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    printf("%c",ch);
    printf("\n");
    putchar(ch);
    printf("\n");
    putch(ch);

    //puts(ch);
}