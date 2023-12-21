// linked list - 
// types of linked list
// 1. singley linked list
// 2. Doubly linked list
// 3. Circular Linked List
// 4. Doubly Linked List

// node has two parts - data part and address part
// only forward sequential movement is possible

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct DoublyLinkedList {
	struct Node* head;
};

void addNode(struct DoublyLinkedList* list, int data) {
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = list->head;
	newNode->prev = NULL;
	if (list->head != NULL) {
		list->head->prev = newNode;
	}
	list->head = newNode;
}
