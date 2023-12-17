// break statement throes the control out of the loop

#include <stdio.h>

int main()
{
    int a,i,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&a);
        if (a<0)
        {
            break;
        }
        sum=sum+a;
    }
    printf("%d",sum);
}