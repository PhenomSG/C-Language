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
