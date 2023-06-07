#include <stdio.h>

struct student
{
    char name[10];
    int class;
    int rollno;
};

int main()
{
    struct student s1 = { "Sahaj",11 , 28 };
    printf("Name: %s",s1.name);
    printf("\nClass: %d",s1.class);
    printf("\nRollno: %d",s1.rollno);
    
    struct student s2 = { "Rama",12 , 01 };
    printf("\nName: %s",s2.name);
    printf("\nClass: %d",s2.class);
    printf("\nRollno: %d",s2.rollno);

}