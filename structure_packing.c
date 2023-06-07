#include <stdio.h>

#pragma pack(1)
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