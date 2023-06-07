#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char ch,ch1,ch2,ch3[20],ch4;
    
    puts("\ngetchar");
    ch=getchar();
    printf("\nch = %c",ch);
    
    puts("\ngetch");
    ch1=getch();
    printf("\nch = %c",ch1);
    
    puts("\ngetche");
    ch2=getche();
    printf("\nch = %c",ch2);

    puts("\ngets");
    gets(ch3);
    printf("\nch = %c",ch3);
    
    puts("\nscanf");
    scanf("%c",&ch4);
    printf("\nch = %c",ch4);
}