void reverse()
{
    struct node *prevnode,*currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while(nextnode!=0)
    {
        nextnode = nextnode -> next;
        currentnode -> next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}