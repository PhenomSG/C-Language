#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void revLL(struct Node **head)
{
    struct Node *prev, *curr, *next;
    prev = NULL;
    curr = *head; // Use *head to access the actual head node
    next = NULL;

    while (curr != NULL)
    {
        next = curr->link;  // Save the next node
        curr->link = prev;  // Reverse the link

        // Move one step forward in the list
        prev = curr;
        curr = next;
    }

    // Update the head to point to the new start of the reversed list
    *head = prev;
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
        newnode->link = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            struct Node *temp = head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }

    // Print the linked list 
    struct Node *tempPrint = head;
    while (tempPrint != NULL)
    {
        printf("%d ", tempPrint->data);
        tempPrint = tempPrint->link;
    }

    // Reversing a Singley Linked List
    revLL(&head);
    
    printf("\n");
    // Print the reversed linked list 
    tempPrint = head;
    while (tempPrint != NULL)
    {
        printf("%d ", tempPrint->data);
        tempPrint = tempPrint->link;
    }

    // Free the remaining nodes
    tempPrint = head;
    while (tempPrint != NULL)
    {
        struct Node *toFree = tempPrint;
        tempPrint = tempPrint->link;
        free(toFree);
    }

    return 0;
}
