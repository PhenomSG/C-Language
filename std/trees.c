#include <stdio.h>
#include <stdlib.h>

// node for tree
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node * create()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node)); // Added a closing parenthesis here

    int x;
    printf("\nEnter data (-1 for no node): ");
    scanf("%d",&x);
    // checking for -1
    if (x == -1)
    {
        return NULL;
    }
    // inserting x
    newnode->data = x;

    // left child
    printf("\nEnter data for Left child of %d ",x);
    newnode -> left = create();
    
    // right child
    printf("\nEnter data for Right child of %d ",x);
    newnode -> right = create();

    return newnode;
}

// Function to perform inorder traversal of the binary tree
void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function to perform preorder traversal of the binary tree
void preorderTraversal(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Function to perform postorder traversal of the binary tree
void postorderTraversal(struct node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node * root;
    root = NULL;
    root = create();
    
    printf("\nInorder Traversal: ");
    inorderTraversal(root);
    
    printf("\nPreorder Traversal: ");
    preorderTraversal(root);
    
    printf("\nPostorder Traversal: ");
    postorderTraversal(root);
    
    return 0;
}
