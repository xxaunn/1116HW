#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n) {
	int swapped;

	for (int i = 0; i < n - 1; i++) {
		swapped = 0;

		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
		}

		// If no swaps were made, the array is already sorted
		if (swapped == 0) {
			break;
		}
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	printArray(arr, n);

	bubbleSort(arr, n);

	printf("Sorted array: ");
	printArray(arr, n);

	return 0;
}