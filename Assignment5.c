#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <ctype.h>

/****************************
Your name:Karan Buxey
What it Does: Takes a sentence and shows count of capital letters
****************************/
int count_capital(char *str) {
	int count = 0;
	int i = 0;
	while (str[i]) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			++count;
		i++;
	}
	return count;
}

int main() {
	char str[51];
	printf("Enter a sentence");
	fgets(str, 50, stdin);
	printf("Number of capital letters is %d", count_capital(str));
	return 0;
}