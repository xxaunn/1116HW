#include <stdio.h>
#include <stdlib.h>
#define Size 12

int main(void) {
	int a[Size] = { 1,3,5,4,7,2,99,16,45,67,89,45 };
	int i;
	int total = 0;

	for (i = 0;i < Size;i++) {
		total += a[i];
	}
	printf("Total of array element values is %d\n", total);

	system("Pause");
	return 0;
}