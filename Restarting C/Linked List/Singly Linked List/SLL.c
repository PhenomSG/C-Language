#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node* head, * newnode, * temp;
    head = NULL;
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

    return 0;
}
