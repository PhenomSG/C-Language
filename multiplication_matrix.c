#include <stdio.h>

int main()
{
    int a[10][10];
    int b[10][10];
    int i,j;
    int m,n,p,q;
    int k;
    int c[10][10];

    printf("\nEnter size of A matrix: ");
    scanf("%d%d",&m,&n);
    printf("\nEnter size of B matrix: ");
    scanf("%d%d",&p,&q);

    if (n!=p)
    {
        printf("Not possible");
    }
    else
    {
        //matrix A
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("\nEnter A[%d][%d] ",i+1,j+1);
                    scanf("%d",&a[i][j]);
                }
            }
        //matrix B
        for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf("\nEnter B[%d][%d] ",i+1,j+1);
                    scanf("%d",&b[i][j]);
                }
            }    
    
        //product matrix
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < q; j++)
            {
                c[i][j]=0;
                for(k = 0; k < n; k++)
                    {
                        c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                    }
            }
        }

        // product matrix
        printf("\nThe product of matrices is:\n");
        for ( i = 0; i < m; i++)
        {
            for (j = 0; j < q ; j++)
            {
                printf("%d\t",c[i][j]);  
            }
            printf("\n");
        }
    }       
}