#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value);

struct Node *insertEnd(struct Node *tail, int value)
{
    struct Node *newNode = createNode(value);
    if (tail == NULL)
    {
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
    return tail;
}

void printList(struct Node *last)
{
    if (last == NULL)
        return;

    struct Node *head = last->next;
    while (1)
    {
        printf("%d ", head->data);
        head = head->next;
        if (head == last->next)
            break;
    }
    printf("\n");
}

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
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

    last = insertEnd(last, 5);
    last = insertEnd(last, 6);

    printf("List after inserting 5 and 6: ");
    printList(last);

    return 0;
}
