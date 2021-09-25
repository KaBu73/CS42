#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <ctype.h>

/****************************

Your name:Karan Buxey

What project does:Displays the minimum, maximum, and average of the enteries

****************************/


int main()
{
	int max_int = 0, min_int = 0;
	int count = 0;
	int userInput; double sum = 0.0, ave;

	printf("Enter input value, type 0 to stop:");

	scanf("%d", &userInput);

	min_int = userInput;
	max_int = userInput;

	while (userInput != 0)
	{
		count++;
		sum += userInput;  //sum
		if (min_int > userInput) { //test for min
			min_int = userInput;
		}
		if (max_int < userInput) {  //test for max
			max_int = userInput;
		}

		printf("Enter input value, type 0 to stop:");

		scanf("%d", &userInput);

	}
	ave = sum / count; // gets average
	printf("The minimum entry was: %d\nThe maximum entry was: %d\nThe average of all enteries was: %f", min_int, max_int, ave);

}