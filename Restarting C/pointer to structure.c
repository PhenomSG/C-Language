#include <stdio.h>

struct student
{
    int rollno;
    char name[50]; // Assuming the name can be a string, so using an array of characters
    float marks;
};

int main() // Changed 'void' to 'int' for the main function
{
    struct student s = {1, "Sahaj", 99}; // Corrected the structure variable declaration
    struct student *ptr = &s;
    
    printf("Roll no is %d\n", ptr->rollno); // Added a newline for better formatting
    printf("Name is %s\n", ptr->name);      // Print the name
    printf("Marks are %.2f\n", ptr->marks);  // Print the marks
    
    return 0; // Added return statement
}
