#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum size of the stack
#define MAX_SIZE 100

// Define the stack structure
struct Stack {
    char items[MAX_SIZE];
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
void push(struct Stack *stack, char value) {
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push %c.\n", value);
    } else {
        stack->items[++stack->top] = value;
    }
}

// Function to pop an element from the stack
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop from an empty stack.\n");
        return '\0'; // Return null character for an empty stack
    } else {
        return stack->items[stack->top--];
    }
}

// Function to get the precedence of an operator
int getPrecedence(char operator) {
    switch (operator) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

// Function to convert infix expression to postfix expression
void infixToPostfix(char infix[], char postfix[]) {
    struct Stack stack;
    initialize(&stack);

    int i = 0, j = 0;

    while (infix[i] != '\0') {
        char token = infix[i];

        if (isalnum(token)) {
            postfix[j++] = token;
        } else if (token == '(') {
            push(&stack, token);
        } else if (token == ')') {
            while (!isEmpty(&stack) && stack.items[stack.top] != '(') {
                postfix[j++] = pop(&stack);
            }
            if (!isEmpty(&stack) && stack.items[stack.top] == '(') {
                pop(&stack); // Pop '(' from the stack
            } else {
                printf("Invalid expression: Unmatched parenthesis.\n");
                exit(1);
            }
        } else {
            while (!isEmpty(&stack) && getPrecedence(stack.items[stack.top]) >= getPrecedence(token)) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, token);
        }

        i++;
    }

    // Pop remaining operators from the stack
    while (!isEmpty(&stack)) {
        if (stack.items[stack.top] == '(') {
            printf("Invalid expression: Unmatched parenthesis.\n");
            exit(1);
        }
        postfix[j++] = pop(&stack);
    }

    // Add null character to the end of the postfix expression
    postfix[j] = '\0';
}

int main() {
    // Input infix expression
    char infix[MAX_SIZE];
    printf("Enter a valid parenthesized infix expression: ");
    fgets(infix, sizeof(infix), stdin);

    // Remove newline character from the input
    infix[strcspn(infix, "\n")] = '\0';

    // Check if the expression is non-empty
    if (strlen(infix) == 0) {
        printf("Invalid expression: Empty input.\n");
        return 1;
    }

    // Allocate memory for the postfix expression
    char postfix[MAX_SIZE];

    // Convert infix to postfix
    infixToPostfix(infix, postfix);

    // Print the infix and postfix expressions
    printf("\nInfix Expression: %s\n", infix);
    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
