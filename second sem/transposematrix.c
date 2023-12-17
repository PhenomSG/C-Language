#include <stdio.h>
int main()
{
    int a[20][20];
    int m,n;
    int i,j;

    //reading arrays
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

    // printing arrays
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }        

    // transpose matrix
    printf("\nThe Transpose Matrix is\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    
}