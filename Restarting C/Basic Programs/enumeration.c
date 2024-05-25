// enum is a user defined function
// used to assign name to integral values
// if you don't explicitly assign values, they are assigned sequentially starting from 0.

#include <stdio.h>

// Enumeration declaration
enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    // Enumeration variable
    enum Color chosenColor = GREEN;

    // Using the enumeration constants
    if (chosenColor == RED) {
        printf("The color is red.\n");
    } else if (chosenColor == GREEN) {
        printf("The color is green.\n");
    } else if (chosenColor == BLUE) {
        printf("The color is blue.\n");
    }

    return 0;
}


