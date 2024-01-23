#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void create(struct Node** head) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;
    newNode->prev = NULL;

    *head = newNode; // Update the head to point to the newly created node
}

int main() {
    struct Node* head = NULL; // Initialize head to NULL
    create(&head);

    return 0;
}
