// structure is a user defined data type
// structure is a collection of one or more variables of different datatypes that are grouped together under a single name

#include <stdio.h>

// struct student -> it is a datatype
struct student    // struct -> keyword
                    // student -> structure tag (optional)
                    // if we do not write tag we cannot declare variable of this datatype anywhere as tag is important
{
    int rollno;     // 4 bytes
    char name[20];  // 4 bytes      // 28 bytes in size of struct student
    float marks;    // 20 bytes
};

void main()
{
    struct student s = {1,"sahaj",100};     // order is important
    printf("%d\n", s.rollno);         // . (dot) is a membership operator
    printf("%s\n", s.name);
    printf("%f\n", s.marks);
}

