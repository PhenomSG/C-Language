// W+ a file in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[20]="Hello test";
    char ch;
    fp=fopen("abc.txt","w+");

    if (fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    
    fputs(str,fp);
    fputs("\nThis is File Handling in W+",fp);
    
    // reading in w+
    rewind(fp);
    while (!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
        
    fclose(fp);
}