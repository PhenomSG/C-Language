#include <stdio.h>
#include <stdlib.h> // Include for malloc

// A Single linked list node 
struct node
{
    int data;           // 4 bytes
    struct node *next;  // 8 bytes (on 64-bit systems)
};

int main() // Use int main() instead of void main()
{
    struct node *head, *newnode, *temp;
    head = NULL; // Use NULL instead of 0
    int choice;

    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed. Exiting.\n");
            return 1; // Return an error code
        }

        printf("Enter Data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (0,1)? ");
        scanf("%d", &choice);
    } while (choice != 0); // Use a do-while loop to ensure the loop runs at least once

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data); // Add a space for better readability
        temp = temp->next;
    }

    // Free allocated memory
    temp = head;
    while (temp != NULL)
    {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0; // Indicate successful execution
}
