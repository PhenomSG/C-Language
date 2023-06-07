#include <stdio.h>
int main()
{
    int dist;
    int dist_m,dist_cm;
    printf("Enter distance between two cities: ");
    scanf("%d",&dist);
    dist_m=dist*1000;
    dist_cm=dist_m*100;
    printf("Distance in m is %d",dist_m);
    printf("\nDistance in cm is %d",dist_cm);
}