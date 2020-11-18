#include <stdio.h>
#pragma warning(disable : 4996)

int HW0201()
{
	int age, height, BPM, bagels;
	printf("Input your age: ");
	scanf("%d", &age);
	printf("Input your height: ");
	scanf("%d", &height);
	printf("Input your heart rate: ");
	scanf("%d", &BPM);
	printf("How many bagels did you eat for breakfast?");
	scanf("%d", &bagels);
	printf("\n");



	printf("Your Age: %10d years\n", age);
	printf("Your Height: %7d inches\n", height);
	printf("Your Heartrate: %4d beats per minute\n", BPM);
	printf("Your Bagel Count: %2d bagels per breakfast\n", bagels);

	printf("The Magic Number is: %d\n", (age * (height - bagels)) / (bagels % (BPM * 2)));

	return 0;
}