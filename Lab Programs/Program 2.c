#include <stdio.h>
#include <stdlib.h>

// Define the maximum size of the stack
#define MAX_SIZE 10

// Define the stack structure
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push %d.\n", value);
    } else {
        stack->items[++stack->top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop from an empty stack.\n");
    } else {
        printf("%d popped from the stack.\n", stack->items[stack->top--]);
    }
}

// Function to display the elements of the stack
void display(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements:\n");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d\n", stack->items[i]);
        }
    }
}

int main() {
    // Declare and initialize the stack
    struct Stack stack;
    initialize(&stack);

    // Push some elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Display the current state of the stack
    display(&stack);

    // Pop an element from the stack
    pop(&stack);

    // Display the updated state of the stack
    display(&stack);

    return 0;
}
