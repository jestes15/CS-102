#include <stdio.h>
#pragma warning(disable : 4996)

int HW03() {

	float grade;
	char letter_grade;

	printf("What was their grade: ");
	scanf("%f", &grade);

	if (grade >= 89.5) {
		letter_grade = 'A';
	}
	else if (grade >= 79.5) {
		letter_grade = 'B';
	}
	else if (grade >= 69.5) {
		letter_grade = 'C';
	}
	else if (grade >= 59.5) {
		letter_grade = 'D';
	}
	else {
		letter_grade = 'F';
	}

	printf("\nThe letter grade equivalent to the grade is %c\n", letter_grade);

	return 0;
}