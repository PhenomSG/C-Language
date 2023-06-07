// writing in a file in C

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch='b';
    char str[100] = "Hi, this is Sahaj";
    int a=10;

    fp = fopen("abc.txt","w");

    if (fp==NULL)
    {
        printf("Error");
        return -1;
    }
    
    
    // writing in a file
    fputc('a',fp);
    fputc(ch,fp);
    fputs(str,fp);
    fprintf(fp,"%d %s",a,str);

    fclose(fp);     // file should be closed
}