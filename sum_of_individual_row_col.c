#include <stdio.h>
int main()
{
    int a[20][20];
    int m,n;
    int i,j;
    int sc,sr;

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
    
    // sum_of_individual_row_col
    for ( i = 0; i < m; i++)
    {
        sr = sc = 0;
        for ( j = 0; j < n; j++)
        {
            sr = sr + a[i][j];
            sc = sc + a[j][i];
        }
        printf("\nSum of individual row: %d",sr);
        printf("\nSum of individual column: %d",sc);
    }
}