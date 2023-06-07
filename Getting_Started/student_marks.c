#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    int sum;
    float per;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    per=((sum*100)/500);
    printf("Sum is: %d",sum);
    printf("\nPercentage is: %f",per);
}