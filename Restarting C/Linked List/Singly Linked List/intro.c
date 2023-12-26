// linked list - 
// types of linked list
// 1. singley linked list
// 2. Doubly linked list
// 3. Circular Linked List
// 4. Doubly Linked List

// node has two parts - data part and address part
// only forward sequential movement is possible

// sll
 #include <stdio.h>

 struct node
 {
	int data;
	struct node * next
 };
 
// dll
 struct dnode
 {
	int data;
	struct node * next;
	struct node * prev;
 };

 // cll - variation of sll
 // last node points to address of first node
 
 