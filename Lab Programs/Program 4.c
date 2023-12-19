#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Define the maximum size of the stack
#define MAX_SIZE 100

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
    }
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop from an empty stack.\n");
        exit(1);
    } else {
        return stack->items[stack->top--];
    }
}

// Function to evaluate a postfix expression
int evaluatePostfix(char postfix[]) {
    struct Stack stack;
    initialize(&stack);

    int i = 0;

    while (postfix[i] != '\0') {
        char token = postfix[i];

        if (isdigit(token)) {
            // Convert character digit to integer and push onto the stack
            push(&stack, token - '0');
        } else {
            // Operator encountered, perform operation
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);

            switch (token) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    // Check for division by zero
                    if (operand2 == 0) {
                        printf("Error: Division by zero.\n");
                        exit(1);
                    }
                    push(&stack, operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", token);
                    exit(1);
            }
        }

        i++;
    }

    // The result should be on the top of the stack
    return pop(&stack);
}

int main() {
    // Input postfix expression
    char postfix[MAX_SIZE];
    printf("Enter a valid postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);

    // Remove newline character from the input
    postfix[strcspn(postfix, "\n")] = '\0';

    // Check if the expression is non-empty
    if (postfix[0] == '\0') {
        printf("Invalid expression: Empty input.\n");
        return 1;
    }

    // Evaluate the postfix expression
    int result = evaluatePostfix(postfix);

    // Print the result
    printf("\nResult of the postfix expression: %d\n", result);

    return 0;
}
