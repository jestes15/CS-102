#include <stdio.h>
#pragma warning(disable : 4996)

int HW05() {

	int input, maxSeq = 1;
	printf("What number would you like to count to? ");
	scanf("%d", &input);

	while (maxSeq < (input + 1)) {
		printf("%d\n\n", maxSeq);
		maxSeq++;
	}

	printf("Loop executed %d times!\n", input);

	return 0;
}