#include <stdio.h>
int main()
{
    int a[20][20];
    int b[20][20];
    int c[20][20];
    int m,n;
    int i,j;

    //reading array1
    printf("Enter row size of array: ");
    scanf("%d",&m);
    printf("\nEnter column size of array: ");
    scanf("%d",&n);

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("\nEnter a[%d][%d] number: ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    // printing array1
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }    
    
    //reading array2
    printf("Enter row size of array: ");
    scanf("%d",&m);
    printf("\nEnter column size of array: ");
    scanf("%d",&n);

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("\nEnter b[%d][%d] number: ",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }

    // printing array2
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }    
    
    // printing array3
    printf("\nAddition of both matrices\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }        
}