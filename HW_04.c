/*
* Author: Joshua Estes
* Class: CS 102 Fall 2020
* Date: September 22, 2020
*/

#include <stdio.h>
#pragma warning(disable : 4996)

int HW04() {

	int process = 0;
	float number = 0;
	float input = 0;

	printf("Enter up to 5 numbers. Type 0 to stop.\n");

	if (process < 6) {

		scanf("%g", &input);
		number += input;

		if (input == 0) {
			printf("Your total is: %12.3f", number);
			return;
		}
		else {
			printf("Your number was: %10.3f\n", input);
		}
		process++;
	}
	if (process < 6) {

		scanf("%g", &input);
		number += input;

		if (input == 0) {
			printf("Your total is: %12.3f", number);
			return;
		}
		else {
			printf("Your number was: %10.3f\n", input);
		}
		process++;
	}
	if (process < 6) {

		scanf("%g", &input);
		number += input;

		if (input == 0) {
			printf("Your total is: %12.3f", number);
			return;
		}
		else {
			printf("Your number was: %10.3f\n", input);
		}
		process++;
	}

	if (process < 6) {

		scanf("%g", &input);
		number += input;

		if (input == 0) {
			printf("Your total is: %12.3f", number);
			return;
		}
		else {
			printf("Your number was: %10.3f\n", input);
		}
		process++;
	}

	if (process < 6) {

		scanf("%g", &input);
		number += input;

		if (input == 0) {
			printf("Your total is: %12.3f", number);
			return;
		}
		else {
			printf("Your number was: %10.3f\n", input);
		}
		process++;
		printf("Your total is: %12.3f", number);
	}

	return 0;

}