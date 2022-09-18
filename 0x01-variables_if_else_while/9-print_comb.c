#include <stdio.h>

/**
 * main:- This is the main function
 * Description: This program shows positive of negative numbers
 * Return:0 - Returns Zero
 */
int main(void)
{
	int lower;

	for (lower = 48; lower <= 57; lower++)
	{
		putchar(lower);
		putchar(',');
		putchar(' ');
	}
	putchar(',');
	return(0);
}
