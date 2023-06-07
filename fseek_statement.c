#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

int main()
{
    FILE *fp=NULL;
    char ch;

    fp=fopen("abc.txt","r");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    
    fseek(fp,6,SEEK_SET);   // set cursor 6 bits from starting
    ch=fgetc(fp);
    printf("%c",ch);
    fseek(fp,-3,SEEK_CUR);  // set cursor -3 bits from current position
    ch=fgetc(fp);
    printf("%c",ch);
    fseek(fp,-3,SEEK_END);  // set cursor -3 bits from ending
    ch=fgetc(fp);
    printf("%c",ch);
    
}