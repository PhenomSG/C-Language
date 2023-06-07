#include <stdio.h>
#include <math.h>
int main()
{
    float a[10],*ptr,sum,mean,sd,sumsd;
    int i,n;
    sum=0;
    mean=0;
    sd=0;
    sumsd=0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    ptr=a;  // calculating sum
    for(i=0 ; i<n ; i++)
    {    sum = sum + *ptr;
        ptr++;
    }

    mean=sum/n; // calculating mean
    
    ptr=a;  // calculating sumstd
    for(i=0 ; i<n ; i++)
    {
        sumsd = sumsd + pow((*ptr-mean),2);
        ptr++;
    }
    sd = sqrt(sumsd/n);

    printf("Sum = %d ",sum);
    printf("\nMean = %d",mean);
    printf("\nStandard Deviation = %d",sd);

}