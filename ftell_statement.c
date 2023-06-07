#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

int main()
{
    FILE *fp=NULL;
    char ch;
    int pos;
    char str[50];

    fp=fopen("abc.txt","r");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    
    pos=ftell(fp);
    printf("\n%d",pos);

    fseek(fp,5,SEEK_SET);   // set cursor 5 bits from starting
    printf("\n%d",ftell(fp));

    ch=fgetc(fp);
    printf("\n%c",ch);

    printf("\n%d",ftell(fp));
    
    fscanf(fp,"%s",str);
    printf("\n%s",str);
    printf("\n%d",ftell(fp));

    // to tell file length
    fseek(fp,0,SEEK_END);
    printf("\n%d",ftell(fp));
}