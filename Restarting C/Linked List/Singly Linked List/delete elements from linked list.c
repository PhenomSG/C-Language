#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void delbeg(struct Node **head)
{
    printf("\nDeleting element from the beginning\n");

    if (*head == NULL)
    {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void delend(struct Node **head)
{
    printf("\nDeleting element from the end\n");

    if (*head == NULL)
    {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    if ((*head)->next == NULL)
    {
        // If there's only one node, delete it
        free(*head);
        *head = NULL;
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}

void delpos(struct Node **head, int position)
{
    printf("\nDeleting element from position %d\n",position);

    if (*head == NULL)
    {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    for (int i = 1; i < position && temp != NULL; ++i)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position is beyond the size of the list.\n");
        return;
    }

    if (prev == NULL)
    {
        // Deleting the first node
        *head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }

    free(temp);
}

int main()
{
    // Declare head outside the loop
    struct Node *head = NULL;

    // create linked list
    for (int i = 0; i < 5; i++)
    {
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->data = i + 3;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            struct Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    // Print the linked list after insertion
    struct Node *tempPrint = head;
    while (tempPrint != NULL)
    {
        printf("%d ", tempPrint->data);
        tempPrint = tempPrint->next;
    }

    delbeg(&head);
    // Print the linked list after deletion
    tempPrint = head;
    while (tempPrint != NULL)
    {
        printf("%d ", tempPrint->data);
        tempPrint = tempPrint->next;
    }

    delend(&head);
    // Print the linked list after deletion
    tempPrint = head;
    while (tempPrint != NULL)
    {
        printf("%d ", tempPrint->data);
        tempPrint = tempPrint->next;
    }

    delpos(&head, 2);
    // Print the linked list after deletion
    tempPrint = head;
    while (tempPrint != NULL)
    {
        printf("%d ", tempPrint->data);
        tempPrint = tempPrint->next;
    }

    // Free the remaining nodes
    struct Node *tempFree = head;
    while (tempFree != NULL)
    {
        struct Node *toFree = tempFree;
        tempFree = tempFree->next;
        free(toFree);
    }

    return 0;
}
