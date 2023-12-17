#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    int rank;
};

int main()
{
    int i;
    struct student s[3];
    for ( i = 0; i < 3; i++)
    {
        printf("Enter rollno: ");
        scanf("%d",&s[i].rollno);
        printf("Enter name: ");
        scanf("%s",&s[i].name);
        printf("Enter rank: ");
        scanf("%d",&s[i].rank);
    }
    
    // printing
    printf("Rollno\tName\tRank");
    for ( i = 0; i < 3; i++)
    {
        printf("\n%d\t%s\t%d",s[i].rollno,s[i].name,s[i].rank);
    }
    
}
