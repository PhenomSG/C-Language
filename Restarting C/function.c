// types of functions
// 1. no arg no rt
// 2. no arg with rt
// 3. with arg no rt
// 4. with arg with rt

// 1. no arg no rt
#include <stdio.h>
void sum1()
{
    int a,b;
    int sum;
    a = 5;
    b = 5;
    sum = a + b;
    printf("%d",sum);
}

void sum2()
{
    int a,b;
    int sum;
    a = 5;
    b = 7;
    sum = a + b;
    return sum
}

int main()
{
    sum1();
    sum2();

}

