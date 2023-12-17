#include <stdio.h>

struct student
{
    char name[10];
    int class;
    int rollno;
};
// works here as well
//struct student s1 = { "Sahaj",11 , 28 };
int main()
{
    struct student s1 = { "Sahaj",11 , 28 };    // works here as well
    struct student *ptr = &s1;
    printf("Name: %s",(*ptr).name);
    printf("\nClass: %d",(*ptr).class);
    printf("\nRollno: %d",(*ptr).rollno);
    
}