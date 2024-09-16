#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct Node *insertAtBeginning(struct Node *last, int value)
{
    struct Node *newNode = createNode(value);

    if (last == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    newNode->next = last->next;
    last->next = newNode;

    return last;
}

void printList(struct Node *last)
{
    if (last == NULL) return;

    struct Node *head = last->next;
    while (1){
        printf("%d ", head->data);
        head = head->next;
        if (head == last->next)
            break;
    }
    printf("\n");
}

int main()
{
    struct Node *first = createNode(2);
    first->next = createNode(3);
    first->next->next = createNode(4);
    struct Node *last = first->next->next;
    last->next = first;

    printf("Original list: ");
    printList(last);

    last = insertAtBeginning(last, 5);

    printf("List after inserting 5 at the beginning: ");
    printList(last);

    return 0;
}
