#include <stdio.h>

struct student
{
    char name[10];
    int class;
    int rollno;
};

int main()
{
    struct student s;
    printf("%d",sizeof(s));
}