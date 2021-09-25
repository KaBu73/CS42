#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <ctype.h>

/****************************

Your name:Karan Buxey

What project does: Menu for a Simple Bank Account

****************************/

int main()
{
	int r; //response the user gives that shows what they want to do
	float balance = 0;
	float dpsamt; //the deposit amount
	float wdwamt; //the withdraw amount
	do {
		printf("1 to show balance\n 2 to Make a Deposit \n 3 to Make a Withdrawl \n 4 to Exit");
		scanf("%d", &r);

		switch (r) {
		case 1: //code for balance
			printf("Your balance is: %f", balance);
			break;

		case 2: //code for them to make a deposit money
			printf("How much would you like to enter?");
			scanf("%f", &dpsamt);
			balance += dpsamt;
			break;

		case 3: // code for them to withdraw money
			printf("How much would you like to withdraw?");
			scanf("%f", &wdwamt);
			if (balance < wdwamt) {
				printf("Cannot do this transaction");
			}
			else {
				balance = balance - wdwamt;
			}
			break;

		case 4: // This stops the code
			printf("Exiting\n");
			return 0;
		default:
			printf("Invalid choice\n");
		}


	} while (r != 4);
	return 0;
}
