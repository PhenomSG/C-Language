// singly linked list

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

int main()
{
    
    struct Node *head, *newnode, *temp;     // stores address of struct Node
    head = 0;

    int choice = 1;
    while (choice)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter Data: ");
        scanf("%d",&newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = newnode = temp;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
        
        printf("Do you want to continue (0,1)?");
        scanf("%d",&choice);

        // traversing the singley linked list
        temp = head;
        while(temp != 0)
        {
            printf("%d",temp->data);
            temp = temp->next;
        }

    }



    return 0;
}
