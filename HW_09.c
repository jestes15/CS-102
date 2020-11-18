/*
Author: Joshua Estes
Class: CS 102
Date: 11/9/2020
*/

#include <stdio.h>
#pragma warning(disable : 4996)

void HW09() {
	int array[100], sum = 0;
	int* ptr = NULL;
	ptr = array;

	for (int i = 0; i < 100; i++) {
		*(ptr + i) = 0;
	}

	for (int x = 0; x < 100; x++) {
		if (x != 0) {
			if ((x + 1) % 10 == 0)
				printf("%d\n", *(ptr + x));
			else
				printf("%d, ", *(ptr + x));
		}
		else {
			printf("%d, ", *ptr);
		}
	}
	printf("\n");
	for (int x = 0; x < 100; x++) {
		*(ptr + x) = x;
	}
	for (int x = 0; x < 100; x++) {
		if (x != 0) {
			if ((x + 1) % 10 == 0)
				printf("%d\n", *(ptr + x));
			else
				printf("%d, ", *(ptr + x));
		}
		else
			printf("%d,y ", *(ptr + x));
	}

	for (int x = 0; x < 100; x++) {
		sum += *(ptr + x);
	}
	printf("\nThe sum of all the values in the array is: %d\n", sum);
}