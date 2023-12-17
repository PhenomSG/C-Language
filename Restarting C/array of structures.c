#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct student s[3];
    int i;
    // reading the input
    for ( i = 0; i < 3; i++)
    {
        printf("Enter Roll No: ");
        scanf("%d",&s[i].rollno);
        printf("\nEnter Name: ");
        scanf("%s",s[i].name);
        printf("\nEnter Marks: ");
        scanf("%f",&s[i].marks);
    }
    // printing the input
    for ( i = 0; i < 3; i++)
    {
        printf("%d\t",s[i].rollno);
        printf("%s\t",s[i].name);
        printf("%f\t",s[i].marks);
        printf("\n");
    }
    
}