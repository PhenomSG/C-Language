#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    char items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, char value) {
    if (!isFull(stack)) stack->items[++stack->top] = value;
}

char pop(struct Stack *stack) {
    return isEmpty(stack) ? '\0' : stack->items[stack->top--];
}

int getPrecedence(char operator) {
    return operator == '+' || operator == '-' ? 1 : operator == '*' || operator == '/' ? 2 : 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    struct Stack stack;
    initialize(&stack);

    int i = 0, j = 0;

    while (infix[i]) {
        char token = infix[i++];

        if (isalnum(token)) postfix[j++] = token;
        else if (token == '(') push(&stack, token);
        else if (token == ')') while (!isEmpty(&stack) && stack.items[stack.top] != '(') postfix[j++] = pop(&stack);
        else while (!isEmpty(&stack) && getPrecedence(stack.items[stack.top]) >= getPrecedence(token)) postfix[j++] = pop(&stack);
            push(&stack, token);
    }

    while (!isEmpty(&stack)) postfix[j++] = pop(&stack);
    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];

    printf("Enter a valid parenthesized infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infixToPostfix(infix, postfix);

    printf("\nInfix Expression: %s\n", infix);
    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
