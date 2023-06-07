// reading a file in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp=NULL;
    char ch[50];
    fp=fopen("abc.txt","a");

    if (fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    printf("Enter the content u want to append: ");
    gets(ch);
    fprintf(fp,"%s",ch);
    printf("\nSuccessfully appended");

    fclose(fp);
}