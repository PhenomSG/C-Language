// not working as intended

#include <stdio.h>

enum days
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main()
{
    enum days today=tuesday;
    enum days weekday;

    printf("%d",today);

    printf("\nInsert a week day: ");
    scanf("%s", weekday);

    switch (weekday)
    {
    case monday:
        printf("\nWorkday 01");
        break;
    case tuesday:
        printf("\nWorkday 02");
        break;
    case wednesday:
        printf("\nWorkday 03");
        break;
    case thursday:
        printf("\nWorkday 04");
        break;
    case friday:
        printf("\nWorkday 05");
        break;
    case saturday:
        printf("\nWorkday 06");
        break;
    case sunday:
        printf("\nHoliday");
        break;
    default:
        printf("\nError");
        break;
    }
}