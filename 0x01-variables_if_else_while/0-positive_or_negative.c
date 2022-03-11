#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here*/

/* betty style doc for function goes here*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here*/
	if (n>0)
		printf("%d is positive", n);
	else if (n==0)
		printf("%d is zero", n);
	else if (n<0)
		printf("%d is negative", n);
	return (0);
}
