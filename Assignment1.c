#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <ctype.h>

/****************************

Your name:Karan Buxey

What project does:Shows the total weighted score

****************************/

int main()

{
	//initallizing my variables before using
	int asgn1score = 0;
	int asgn2score = 0;
	int asgn3score = 0;
	int mdtm = 0;
	int flem = 0; 
	double totasgn, total;
	//initallizing my literals
	double wghtasgn = 0.4;
	double wghtsmdfl = 0.3;

	printf("Enter your first assignment score:");
		scanf("%d", & asgn1score);
	printf("Enter your second assignment score:");
		scanf("%d", &asgn2score);
	printf("Enter your third assignment score:");
		scanf("%d", &asgn3score);
	totasgn = (asgn1score + asgn2score + asgn3score) / 3; //Getting the average of all assignment scores
	printf("Enter your midterm score:");
		scanf("%d", &mdtm);
	printf("Enter your final score:");
		scanf("%d", &flem);
	total = (totasgn*wghtasgn) + (mdtm*wghtsmdfl) + (flem*wghtsmdfl); //Calculating final weighted score

	printf("Your final score is: %f", total);



	return (0);

}