#include <stdio.h>
#include <stdbool.h>
#pragma warning(disable : 4996)

float add();
float subtract();
float multiply();
float divide();


void HW07() {

	while (true) {
		int choice; //Inititalizes the variable chouce used for getting the user's decision.
		float return_val; //Initializes the value used for getting the return value of the seperate functions.

		printf("Wolcome! PLease choose an option by typing its number and pressing enter!\n"
			"1: Add 2 numbers.\n"
			"2: Subtract 2 numbers.\n"
			"3: Multiply 3 numbers.\n"
			"4: Divide 2 numbers.\n"); //prints the menu for the user

		scanf("%d", &choice); //takes the user input and sett it as the choice variable
		switch (choice) { //initializes the switch statement for more efficiency
		case 1:
			return_val = add(); //calls the add fucntion and makes the return value assigned to return_val
			printf("Your final value is: %g\n\n", return_val); //prints the value returned by the called funcion in the previous line
			//%g is used to hide excess zeroes when printing the final value
			break; //Stops the case statement from moving to the next statement
		case 2:
			return_val = subtract(); //calls the subtract fucntion and makes the return value assigned to return_val
			printf("Your final value is: %g\n\n", return_val);//prints the value returned by the called funcion in the previous line
			//%g is used to hide excess zeroes when printing the final value
			break; //Stops the case statement from moving to the next statement
		case 3:
			return_val = multiply(); //calls the multiply fucntion and makes the return value assigned to return_val
			printf("Your final value is: %g\n\n", return_val);//prints the value returned by the called funcion in the previous line
			//%g is used to hide excess zeroes when printing the final value
			break; //Stops the case statement from moving to the next statement
		case 4:
			return_val = divide(); //calls the divide fucntion and makes the return value assigned to return_val
			printf("Your final value is: %g\n\n", return_val);//prints the value returned by the called funcion in the previous line
			//%g is used to hide excess zeroes when printing the final value
			break; //Stops the case statement from moving to the next statement
		}
	}
}

float add() { //creates the function add and says that it will return a float
	float num1, num2;
	printf("What is the first number: ");
	scanf("%f", &num1);
	printf("What is the second number:");
	scanf("%f", &num2);
	return num1 + num2;
}

/*
This function takes an input of two floats and adds them together. I used scanf_s because Visual Studio didnt
like scanf for some reason, and it wa the easiest way to fix the error. The output type is a float also. You will
input the first number in and then the second, it will return the sum of those two numbers to the main function.
*/

float subtract() {
	float num1, num2;
	printf("What is the first number: ");
	scanf("%f", &num1);
	printf("What is the second number:");
	scanf("%f", &num2);
	return num2 - num1;
}

/*
This function takes an input of two floats and subtractes the seconf from the first. I used scanf_s because Visual Studio didnt
like scanf for some reason, and it wa the easiest way to fix the error. The output type is a float also. You will
input the first number in and then the second, it will return the diffence of those two numbers to the main function.
*/

float multiply() {
	float num1, num2, num3;
	printf("What is the first number: ");
	scanf("%f", &num1);
	printf("What is the second number:");
	scanf("%f", &num2);
	printf("What is the third number:");
	scanf("%f", &num3);
	return num1 * num2 * num3;
}

/*
This function takes an input of three floats and multiplies them together. I used scanf_s because Visual Studio didnt
like scanf for some reason, and it wa the easiest way to fix the error. The output type is a float also. You will
input the first number in and then the second and finally the third, it will return the multiplication of those three floats
as one float.
*/

float divide() {
	float num1, num2;
	printf("What is the first number: ");
	scanf("%f", &num1);
	printf("What is the second number:");
	scanf("%f", &num2);
	return num1 / num2;
}

/*
This function takes an input of two float numbers and divides the first by the second. I used scanf_s because Visual Studio didnt
like scanf for some reason, and it wa the easiest way to fix the error. The output type is a float also. You will first type in the
number you want diveded by then the second number which is used to dived the first number, will return a float value to the main function.
*/