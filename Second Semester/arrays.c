// run time initialization

#include <stdio.h>

int main()
{
    int a[10];
    int n,i;
    
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    // reading array
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter %d number: ",i);
        scanf("%d",&a[i]);
    }

    //printing array
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }    
}