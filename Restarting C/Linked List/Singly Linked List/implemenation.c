#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void create(struct Node **head)
{
    int choice = 1;

    while (choice)
    {
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            struct Node *temp = *head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }

        printf("Do you want to continue? (1/0): ");
        scanf("%d", &choice);
    }
}

void traverse(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    create(&head);
    printf("Linked List: ");
    traverse(head);

    return 0;
}
