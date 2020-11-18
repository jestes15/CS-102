#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#pragma warning(disable : 4996)

int HelloWorld();
int HW0101(), HW0102(), HW0103();
int HW0201(), HW0202(), HW0203();
int HW03();
int HW04();
int HW05();
int HW06();
int HW07();
int HW08();
int HW09();


int main() {
	void(*arr[15])();
	int usr_choice[5];
	bool loop_val = true;
	int return_val;
	arr[1] = HelloWorld;
	arr[2] = HW0101;
	arr[3] = HW0102;
	arr[4] = HW0103;
	arr[5] = HW0201;
	arr[6] = HW0202;
	arr[7] = HW0203;
	arr[8] = HW03;
	arr[9] = HW04;
	arr[10] = HW05;
	arr[11] = HW06;
	arr[12] = HW07;
	arr[13] = HW08;
	arr[14] = HW09;

	while (loop_val) {
		char msg[] = "Please choose what you want to pick\n"
			"1: Hello World\t\t\t2: Homework 1 q1\n3: Homework 1 q2\t\t4: Homework 1 q3\n5: Homework 2 q1\t\t6: Homework 2 q2\n"
			"8: Homework 2 q3\t\t8: Homework 3\n9: Homework 4\t\t\t10: Homework 5\n11: Homework 6\t\t\t12: Homework 7\n"
			"13: Homework 8\t\t\t14: Homework 9\nOr type exit to exit the program\nYour choice: ";


		printf("%s", msg);
		return_val = scanf("%s", &usr_choice);

		int ret = strcmp(usr_choice, "exit");
		if (ret < 0) {
			const char* str = usr_choice;
			int x;
			sscanf(str, "%d", &x);
			arr[x]();
			printf("\n\n\n\n\n\n");
		}
		else {
			loop_val = false;
		}
	}
}