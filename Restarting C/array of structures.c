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

    // Reading the input
    for (i = 0; i < 3; i++)
    {
        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Printing the input
    printf("\nEntered Information:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Roll No: %d\t", s[i].rollno);
        printf("Name: %s\t", s[i].name);
        printf("Marks: %f\t", s[i].marks);
        printf("\n");
    }

    return 0;
}
