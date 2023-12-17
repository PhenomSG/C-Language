#include <stdio.h>

int avg(int[],int);

int main()
{
    int average;
    int marks[5] = {1,2,3,4,5};
    average = avg(marks,5);
    printf("The average: %d",average);
}

int avg(int marks[],int a)
{
    int i,sum=0,average=0;
    for ( i = 0; i < a; i++)
    {
        sum = sum + marks[i];
    }
    average = sum/a;
    return average;
}