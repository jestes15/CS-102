#include <stdio.h>
#pragma warning(disable : 4996)

int HW0202() {

	int length, width, getArea;

	printf("Input the length : ");
	scanf_s("%d", &length);
	printf("Input the width :");
	scanf_s("%d", &width);
	getArea = length * width;
	printf("The length is %d and the width is %d\n", length, width);
	printf("The area is: %d", getArea);
}