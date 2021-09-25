#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <ctype.h>

/****************************
Your name:Karan Buxey
Purpose: Multiplies and Divides two given numbers
****************************/
void func(double a, double b, double *c, double *d)
{
	*c = a / b;
	*d = a * b;
}
int main()
{
	double a, b, c, d;
	printf("Enter a value for a and b");
	scanf("%lf%lf", &a, &b);

	func(a, b, &c, &d);
	printf("\nC = %f\nD = %f\n\n", c, d);
	return 1;
}
/****************************
Your name:Karan Buxey
Purpose: Takes 20 numbers, calculates average, shows how many inputted numbers were greater than average
****************************/
int numAboveavg(int arr[], int size, double avg) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > avg)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int arr[20];
	int size = 20;
	int *p = arr;
	int sum = 0;
	int count;
	double avg;
	for (int i = 0; i < size; i++)
	{
		printf("Enter the %d element in the array:", (i + 1));
		scanf("%d", &p[i]);
	}
	for (int i = 0; i < 20; i++)
	{
		sum += arr[i];
	}
	avg = sum / 20;
	printf("\nAvg = %f\n", avg);
	count = numAboveavg(arr, size, avg);
	printf("Total number that are above the average are: %d\n", count);
}