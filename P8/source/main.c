#include <stdio.h>
#include <stdlib.h>
#define Size 10

int main(void) {
	int n[Size] = { 19,3,15,7,11,9,16,5,17,1 };
	int i;
	int j;

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	for (i = 0;i < Size;i++) {
		printf("%7d%13d\t", i, n[i]);
		for(j = 1;j <=n[i];j++) {
			printf("%c", '*');
		}
	printf("\n");
	}
	system("Pause");
	return 0;
}