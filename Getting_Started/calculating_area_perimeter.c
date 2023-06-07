#include <stdio.h>
#define PI 3.14
int main()
{
    int r,area,peri;
    printf("Enter radius: ");
    scanf("%d",r);
    area=(PI*r*r);
    peri= (2*PI*r);
    printf("Area is: %d",area);
    printf("\nCircumference is: %d",peri);
}