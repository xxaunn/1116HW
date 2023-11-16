#include <stdio.h>
#include <stdlib.h>
#define Size 100

int linearsearch(const int array[], int key, int size) {
	int n;
	for (n = 0;n < size;++n) {
		if (array[n] == key) {
			return n;
		}
	}
	return -1;
}

int main(void) {
	int a[Size];
	int x;
	int searchkey;
	int element;

	for (x = 0;x < Size;x++) {
		a[x] = 2 * x;
	}
	printf("enter interger search key:\n");
	scanf("%d", &searchkey);

	element = linearsearch(a, searchkey, Size);
	if (element != -1) {
		printf("Found value in element %d\n", element);
	}
	else {
		printf("Value not found\n");
	}
	system("Pause");
	return 0;
}