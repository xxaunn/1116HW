#include <stdio.h>
#include <stdlib.h>
#define Size 5
void modifyarray(int b[], int size) {
	int j;
	for (j = 0;j < size;j++) {
		b[j] *= 2;
	}
}
void modifyelement(int e) {
	printf("Value in modifyelement is %d\n", e *= 2);
}
int main(void) {
	int a[Size] = { 0,1,2,3,4 };
	int i;
	printf("Effects of passing entire array by reference:\n\nThe""valeus of the original array are:\n");
	for (i = 0;i < Size;i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	modifyarray(a, Size);
	printf("The values of the modified array are:\n");
	for (i = 0;i < Size;i++) {
		printf("%3d", a[i]);
	}
	printf("\n\n\nEffects of passing array element""by value:\n\nThe value of a[3] is %d\n", a[3]);
	modifyelement(a[3]);
	printf("The value of a[3] is %d\n", a[3]);
	system("Pause");
	return 0;
}
