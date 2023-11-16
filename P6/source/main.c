#include <stdio.h>
#include <stdlib.h>
#define Size 10

int main(void) {
	int s[Size];
	int j;

	for (j = 0;j < Size;j++) {
		s[j] = 2 + 2 * j;
	}
	printf("%s%13s\n", "Element", "Value");
	for (j = 0;j < 10;j++) {
		printf("%7d%13d\n", j, s[j]);
	}
	system("Pause");
	return 0;
}
