// reading a file in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp=NULL;
    char ch;
    fp=fopen("abc.txt","a+");

    if (fp=NULL)
    {
        printf("Error");
        exit(1);
    }

    fputs("\nKhushi",fp);
    
    rewind(fp);
    while (!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
        
    fclose(fp);
}