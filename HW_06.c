#include <stdio.h>
#include <stdbool.h>
#pragma warning(disable : 4996)

int HW06() {
	bool Value = true;
	while (Value) {
		int getChoice, getInput;
		double getSecondInput, sum = 0;

		printf("How many numbers do you wish to input? ");
		scanf_s("%d", &getInput);

		for (int i = 0; i < getInput; i++) {
			printf("Enter any number, 0 to stop: ");
			scanf_s("%lf", &getSecondInput);

			if (getSecondInput == 0) {
				printf("Task failed successfully\n");
				break;
			}
			else {
				sum += getSecondInput;
				printf("%lf\n", sum);
			}
		}

		printf("Your final total is %lf\n", sum);

		if (sum >= 90.1) {
			printf("%lf is ridiculous!\n", sum);
		}

		else if (sum >= 50.51) {
			printf("That's slightly respectable!\n");
		}

		else {
			printf("A value of %lf is low!\n", sum);
		}

		printf("Do you wish to repeat the loop? 1 for yes, 0 for no ");
		scanf_s("%d", &getChoice);

		if (getChoice == 1) {
			continue;
		}
		else { 
			Value = false; 
		}
	}
}