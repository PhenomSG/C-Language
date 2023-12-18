#include <stdio.h>

int avg(int [], int);

void main()
{
    int average;
    int marks[5] = {10,20,30,40,50};
    average = avg(marks,5); // fun call
    printf("Average is %d",average);
}

int avg(int marks[],int a)
{
    int i, sum = 0, average = 0;
    for(i=0;i<a;i++)
    {
        sum = sum + marks[i];
    }
    average = sum/a;
    return average;     // average = 30
}