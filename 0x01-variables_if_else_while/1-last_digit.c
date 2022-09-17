#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main:- The main function is to alculate
 * description:- This program is a decription.
 * return:0 - The return is zero
 */
int main(void){
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastd = n % 10;
	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
