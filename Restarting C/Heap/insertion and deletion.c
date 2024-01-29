#include <stdio.h>
#include <stdlib.h>

// Function to swap two elements in an array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform Max Heap Insertion
void maxHeapInsert(int *heap, int *size, int value) {
    (*size)++;
    int index = *size - 1;
    heap[index] = value;

    while (index > 0) {
        int parentIndex = (index - 1) / 2;

        if (heap[index] > heap[parentIndex]) {
            swap(&heap[index], &heap[parentIndex]);
            index = parentIndex;
        } else {
            break;
        }
    }
}

// Function to perform Max Heap Deletion
int maxHeapDelete(int *heap, int *size) {
    if (*size == 0) {
        printf("Heap is empty\n");
        return -1; // Or throw an exception
    }

    int maxValue = heap[0];
    int lastIndex = *size - 1;
    heap[0] = heap[lastIndex];
    (*size)--;

    int index = 0;

    while (1) {
        int leftChildIndex = 2 * index + 1;
        int rightChildIndex = 2 * index + 2;
        int largest = index;

        if (leftChildIndex < *size && heap[leftChildIndex] > heap[largest]) {
            largest = leftChildIndex;
        }

        if (rightChildIndex < *size && heap[rightChildIndex] > heap[largest]) {
            largest = rightChildIndex;
        }

        if (largest != index) {
            swap(&heap[index], &heap[largest]);
            index = largest;
        } else {
            break;
        }
    }

    return maxValue;
}

int main() {
    int maxHeap[100];  // Assuming a max heap with a maximum size of 100
    int heapSize = 0;

    maxHeapInsert(maxHeap, &heapSize, 30);
    maxHeapInsert(maxHeap, &heapSize, 20);
    maxHeapInsert(maxHeap, &heapSize, 40);
    maxHeapInsert(maxHeap, &heapSize, 10);
    maxHeapInsert(maxHeap, &heapSize, 25);

    printf("Max Heap after insertion: ");
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", maxHeap[i]);
    }
    printf("\n");

    int deletedValue = maxHeapDelete(maxHeap, &heapSize);
    printf("Deleted Max Value: %d\n", deletedValue);

    printf("Max Heap after deletion: ");
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", maxHeap[i]);
    }
    printf("\n");

    return 0;
}
