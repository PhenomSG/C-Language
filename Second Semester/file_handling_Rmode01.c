// reading a file in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp=NULL;
    char ch[10];
    fp=fopen("abc.txt","r");

    if (fp==NULL)
    {
        printf("Error");
        return -1;
    }

    while (!feof(fp))
    {
        fgets(ch,5,fp);
        printf("%s",ch);
    }
    fclose(fp);
}