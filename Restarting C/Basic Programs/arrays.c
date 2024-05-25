// array is a collection of more than one data items of same data type
// known as DERIVED DATA TYPE
// allows data to be stored in multi dimensional arrays
//cons
// 1. insertion and deletion of element from array is  expensive
// 2. no bound checking in C

//2d array
#include <stdio.h>
int main()
{
    int i,j;
    int a[2][2] = {     // arrayname[row][col]
        {1,2},
        {3,4}
    };

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}