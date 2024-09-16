#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; 
    struct Node* prev; 
    struct Node* next; 
};

struct Node* createNode(int val) {
    struct Node* newNode = 
         (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

int findLength(struct Node* head) {
    int count = 0;
    for (struct Node* cur = head; cur != NULL; cur = cur->next)
        count++;
    return count;
}

int main() {
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);

    head->next = second; 
    second->prev = head;
    second->next = third; 
    third->prev = second;

    printf("Length of the doubly linked list: %d\n", 
           findLength(head));

    return 0;
}
