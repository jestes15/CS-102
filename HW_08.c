#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#pragma warning(disable : 4996)

//imports the necessary libraries used inside my program.

int Menu();
double BasicMath(int);
double Add();
double Subtract();
double Multiply();
double Divide();
double Exp();
double Sine();
double Cosine();
double Tangent();

bool loop_cont = true; //initializes the most common variable in my program

//protoypes of all my functions and declares my variable

void HW08() {
	
	int ret_val;
	//declares and initializes the variable used to allow the program to repeat

	while (loop_cont) {
		 ret_val = Menu(); //calls the Menu function
		 if (ret_val == 0) {
			 loop_cont = false;
			 //If the return value of the Menu funcion is false to loop stops
			 //and the program ends
		 }
		 else {
			 continue;
		 }
	}

}

int Menu() {
	int choice;
	printf("Choose your option or type 0 to quite.\n");
	printf("What kind of calculation fo you want to do?\n"
		"1: Add\n"
		"2: Subtract\n"
		"3: Multiply\n"
		"4: Divide\n"
		"5: Exponential\n"
		"6: Sin(x)\n"
		"7: Cos(x)\n"
		"8: Tan(x)\n");
	//prints the menu which will allow the user to see his options
	scanf_s("%d", &choice);
	if (choice == 0) {
		return 0;
		//sends the exit code to the main function allowing it to end the program
	}
	else {
		BasicMath(choice);
		return 1;
		//returns 1 so that the loop can continue
	}
}

double BasicMath(int usr_choice) {
	double  return_val;
	int rad_choice;

	//declares and initializes the values used for 

	switch (usr_choice) {
	    case 1:
			return_val = Add(); //Calls the Add function
			printf("The final value is: %g\n\n", return_val); //Prints the value returned by Add
            break;

		case 2:
			return_val = Subtract(); //Calls the Subtract function
			printf("The final value is: %g\n\n", return_val); //Prints the value returned by Subtract
		    break;

	    case 3:
			return_val = Multiply(); //Calls the Multiply function
			printf("The final value is: %g\n\n", return_val); //Prints the value returned by Multply
	        break;

		case 4:
			return_val = Divide(); //Calls the Divide function
			printf("The final value is: %g\n\n", return_val); //Prints the value returned by Divide
			break;

		case 5:
			return_val = Exp(); //Calls the Exp function
			printf("The final value is: %g\n\n", return_val); //Prints the value returned by Exp
			break;

		case 6:
			return_val = Sine(); //Calls the Sine function
			printf("The final value is: %g\n\n", return_val); //Prints the value returned by Sine
			break;

		case 7:
			return_val = Cosine(); //Calls the Cosine function
			printf("The final value is: %g\n\n", return_val); //Prints the value returned by Cosine
			break;

		case 8:
			return_val = Tangent(); //Calls the Tangent function
			printf("The final value is: %g\n\n", return_val); //Prints the value returned by Tangent
			break;

		default:
			puts("I'm sorry, but you have chosen a choice not on this list, please try again.\n");
			break;
			//Will print the phrase if the user chooses a value that is not in the menu
	}
}

double Add() {
	//initializes and declares the variable used to loop the program
	double val_num = 0, scan_num;
	
	printf("Input as many numbers as you want, or 0 to get your total.\n");

	while (loop_cont) {
		scanf_s("%lf", &scan_num); //takes the user input
		if (scan_num == 0) {
			return val_num; //if user input is the stop value it returns the final value
		}
		else {
			val_num += scan_num; //if not, it just adds the value to the total
		}
	}
}

double Subtract() {
	double val_num, scan_num;
	printf("Input as many numbers as you want, or 0 to get your total.\n");

	scanf_s("%lf", &val_num);
	//The first input is the number the user wants to subtract everything else from.
	while (loop_cont) {
		scanf_s("%lf", &scan_num);
		//The values he wants to subtract from val_num
		if (scan_num == 0) {
			return val_num; //If usr input is 0, then it returns the final value
		}
		else {
			val_num -= scan_num; //If the user input is not 0, then it evaluates the previous value minus the user input
		}
	}
}

double Multiply() {
	double val_num, scan_num;
	printf("Input as many numbers as you want, or 0 to get your total.\n");

	scanf_s("%lf", &val_num);
	//The first input is the number the user wants to multiply everything by
	while (loop_cont) {
		scanf_s("%lf", &scan_num);

		if (scan_num == 0) {
			return val_num; //If usr input is 0, then it returns the final value
		}
		else {
			val_num *= scan_num; //If the user input is not 0, then it evaluates the previous value multiplied the user input
		}
	}
}

double Divide() {
	double val_num, scan_num;
	printf("Input as many numbers as you want, or 0 to get your total.\n");
	//The first input is the number the user wants to initiate the division
	scanf_s("%lf", &val_num);

	while (loop_cont) {
		scanf_s("%lf", &scan_num);

		if (scan_num == 0) {
			return val_num; //If usr input is 0, then it returns the final value
		}
		else {
			val_num /= scan_num; //If the user input is not 0, then it evaluates the previous value divide the user input
		}
	}
}

double Exp() {
	double base, exp, val_num; //Initialize the variables used in the Exp function
	printf("What do you want the base of your exponential to be?\n");
	scanf_s("%lf", &base); //scans for user input for the base of the exponent
	printf("What do you want your exponent to be?\n");
	scanf_s("%lf", &exp); //scnas for user input for the exponent

	val_num = pow(base, exp); //evaluates the function intended
	return val_num; //returns the value
}

double Sine() {
	double scan_num, val_num; //Initialize the variables used in the Sine function
	printf("What number do you want to be evaluated?\n");
	scanf_s("%lf", &scan_num); //scans for user input

	val_num = sin(scan_num); //taks the sin of the value (in radians) the user input
	return val_num; //returns the final value
}

double Cosine() {
	double scan_num, val_num; //Initialize the variables used in the Cosine function
	printf("What number do you want to be evaluated?\n");
	scanf_s("%lf", &scan_num); //scans for user input

	val_num = cos(scan_num); //taks the cosine of the value (in radians) the user input
	return val_num; //returns the final value
}

double Tangent() {
	double scan_num, val_num; //Initialize the variables used in the Tangent function
	printf("What number do you want to be evaluated?\n");
	scanf_s("%lf", &scan_num); //scans for user input

	val_num = tan(scan_num); //taks the tangent of the value (in radians) the user input
	return val_num; //returns the final value
}