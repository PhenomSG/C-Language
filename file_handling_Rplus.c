// r+ a file in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp=NULL;
    char ch='z';
    fp=fopen("abc.txt","r+");

    if (fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    fputc(ch,fp);   //prints z in place of first character

    rewind(fp);
    while (!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }

    fclose(fp);
}