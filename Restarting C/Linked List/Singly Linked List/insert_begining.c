#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insrtbegin(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
    printf("\n%d Inserted at the beginning\n",newData);
}

// Insert at End
void insrtend(struct Node **head, int newData) {
    struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL; // Initialize the new node's next pointer to NULL since it will be the last node

    if (*head == NULL) {
        // If the list is empty, make the new node the head
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Now temp points to the last node in the list
    temp->next = newNode;
}

// Insert at a specific position
void insrtpos(struct Node **head) {
    int pos, newData;
    printf("Position you want to enter data: ");
    scanf("%d", &pos);

    // Validate if the position is valid
    if (pos < 1) {
        printf("Invalid position\n");
        return;
    }

    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter data for the new node: ");
    scanf("%d", &newData);

    newNode->data = newData;
    newNode->next = NULL;

    // If inserting at the beginning
    if (pos == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // Traverse to the node just before the desired position
    struct Node* temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; ++i) {
        temp = temp->next;
    }

    // Check if the position is beyond the current size of the list
    if (temp == NULL) {
        printf("Position is beyond the size of the list\n");
        free(newNode);  // Free the allocated memory
        return;
    }

    // Insert the new node at the specified position
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {

    struct Node* head = NULL;
    struct Node* newnode, * temp;
    int choice = 1;

    while (choice) {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter Data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (0,1)?");
        scanf("%d", &choice);
    }

    // Traversing the singly linked list
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // Insert at the beginning
    insrtbegin(&head, 100);

    // Insert at the end
    insrtend(&head,200);

    // insert at position
    insrtpos(&head);

    // Traversing the modified singly linked list
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
