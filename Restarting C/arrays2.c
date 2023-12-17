#include <stdio.h>

int main()
{
    int i,j;
    int arr2d[3][3];

    // reading elements of 2d array
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&arr2d[i][j]);
        }
    }

    // printing elements of 2d array
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr2d[i][j]);
        }
        printf("\n");
    }
}