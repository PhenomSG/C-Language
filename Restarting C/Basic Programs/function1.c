#include <stdio.h>
// if we do not declare a function then it is called "IMPLICIT DECLARATION"
void sum1();                // 1. no arg no rt
int sum2();                 // 2. no arg with rt
void sum3(int a, int b);    // 3. with arg no rt
int sum4(int a, int b);     // 4. with arg with rt

int main()
{
    sum1();
    printf("\n%d\n",sum2());
    sum3(3,8);
    printf("\n%d\n",sum4(6,7));

}

void sum1()
{
    int a,b;
    int sum;
    a = 5;
    b = 5;
    sum = a + b;
    printf("%d",sum);
}

// 2. no arg with rt
int sum2()
{
    int a,b;
    int sum;
    a = 5;
    b = 7;
    sum = a + b;
    return sum;
}

// 3. with arg no rt
void sum3(int a, int b)
{
    int sum;
    sum = a + b;
    printf("%d",sum);

}

// 4. with arg with rt
int sum4(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}