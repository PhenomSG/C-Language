#include <stdio.h>
#include <stdlib.h>

int* merge_sort(int arr[], int left, int right) {
    if (left >= right) {
        int* single_element = malloc(sizeof(int));
        if (single_element == NULL) {
            perror("Failed to allocate memory");
            exit(EXIT_FAILURE);
        }
        *single_element = arr[left];
        return single_element;
    }

    int mid = (left + right) / 2;
    int* left_sorted = merge_sort(arr, left, mid);
    int* right_sorted = merge_sort(arr, mid + 1, right);

    int* merged = malloc((right - left + 1) * sizeof(int));
    if (merged == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    int i = 0, j = 0, k = 0;
    while (i <= mid - left && j <= right - mid - 1) {
        if (left_sorted[i] < right_sorted[j]) {
            merged[k++] = left_sorted[i++];
        } else {
            merged[k++] = right_sorted[j++];
        }
    }
    while (i <= mid - left) {
        merged[k++] = left_sorted[i++];
    }
    while (j <= right - mid - 1) {
        merged[k++] = right_sorted[j++];
    }

    free(left_sorted);
    free(right_sorted);

    return merged;
}

// A utility function to print an array of size n
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* sorted_arr = merge_sort(arr, 0, size - 1);
    printf("Given Array\n");
    printArray(arr,size);
    printf("Sorted Array\n");
    printArray(sorted_arr,size);

    free(sorted_arr);

    return 0;
}
