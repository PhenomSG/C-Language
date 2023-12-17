//do
//{
    //statement block
//}
//While(condition);


#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 1,a = 0;

    do
    {
        a = a + i;
        i++;
    }
    while(i <= 10);

    printf("Sum of 1 to 10 is %d",a);
    getch();
}