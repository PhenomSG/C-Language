#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value);

struct Node* insertInEmptyList(struct Node* last, int data) {
    if (last != NULL) return last;

    struct Node* newNode = createNode(data);

    last = newNode;
    return last;
}

void printList(struct Node* last) {
    if (last == NULL) return;

    struct Node* head = last->next;
    while (1) {
        printf("%d ", head->data);
        head = head->next;
        if (head == last->next) break;
    }
    printf("\n");
}

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = newNode;
    return newNode;
}

int main() {
    struct Node* last = NULL;

    last = insertInEmptyList(last, 1);

    printf("List after insertion: ");
    printList(last);

    return 0;
}
