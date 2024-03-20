#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Structure to represent a stack
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function prototypes
void initialize(struct Stack *s);
int isFull(struct Stack *s);
int isEmpty(struct Stack *s);
void push(struct Stack *s, int value);
int pop(struct Stack *s);
void display(struct Stack *s);

int main() {
    struct Stack s;
    initialize(&s);
    int choice, value;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (isFull(&s)) {
                    printf("Stack Overflow: Cannot push more elements\n");
                } else {
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    push(&s, value);
                }
                break;
            case 2:
                if (isEmpty(&s)) {
                    printf("Stack Underflow: Cannot pop from empty stack\n");
                } else {
                    value = pop(&s);
                    printf("Popped element: %d\n", value);
                }
                break;
            case 3:
                display(&s);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to initialize the stack
void initialize(struct Stack *s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *s, int value) {
    s->items[++s->top] = value;
}

// Function to pop an element from the stack
int pop(struct Stack *s) {
    return s->items[s->top--];
}

// Function to display the elements of the stack
void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= s->top; i++) {
            printf("%d ", s->items[i]);
        }
        printf("\n");
    }
}
