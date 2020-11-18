#include <stdio.h>
#pragma warning(disable : 4996)

int HW0203() {

	float getNumber;
	float getMetric;
	float getMiles;
	int getChoice;
	printf("Which conversion are you doing?\n1 : Mile to Meter\n2 : Meter to Mile\n ::");
	scanf_s("%d", &getChoice);

	if (getChoice == 1) {
		printf("Enter number of miles to be converted to kilometers :");
		scanf_s("%f", &getNumber);
		printf("\n");

		getMetric = 1.62 * getNumber;
		if (getNumber == 1) {
			printf("%f mile is %f kilometers.\n\n", getNumber, getMetric);
		}
		else {
			printf("%f miles are %f kilometers.\n\n", getNumber, getMetric);
		}
	}
	else {
		printf("Enter number of kilometers to be converted to miles :");
		scanf_s("%f", &getNumber);
		printf("\n");

		getMiles = getNumber / 1.62;
		if (getNumber == 1) {
			printf("%f kilometer is %f miles.\n\n", getNumber, getMiles);
		}
		else {
			printf("%f miles are %f kilometers.\n\n", getNumber, getMiles);
		}
	}
}