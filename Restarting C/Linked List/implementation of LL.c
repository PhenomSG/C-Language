#include <stdio.h>

// A Single linked list node 
struct node
{
    int data;           // 4bytes
    struct node * next; // 4bytes
};                      // total - 8 bytes

int main()
{
    struct node * head,*newnode;
    head = 0;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d",&newnode->data)
}