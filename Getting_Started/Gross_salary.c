#include <stdio.h>
int salary();

int main()
{
    int a;
    int d_all,h_all,g_sal;
    printf("Base salary of ramesh: ");
    scanf("%d",&a);
    d_all=(0.4*a);
    h_all=(0.2*a);
    g_sal=(a-d_all-h_all);
    printf("Gross Salary is %d",g_sal);
}