#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1,*fp2;
    char c;
    
    fp1=fopen("abc.txt","r");
    if (fp1=NULL)
    {
        printf("Error");
        exit(1);
    }
    
    fp2=fopen("dest.txt","w");
    if (fp2=NULL)
    {
        printf("Error");
        exit(1);
    }
    
    while ((c=fgetc(fp1))!=feof(fp1))
    {
        fputc(c,fp2);
    }
    printf("Coping successful");
    fclose(fp1);
    fclose(fp1);
    
}