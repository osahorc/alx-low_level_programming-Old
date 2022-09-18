#include <stdio.h>

/**
 * main:- This is the main function
 * Description: This program shows positive of negative numbers
 * Return:0 - Returns Zero
 */
int main(void)
{
	int lower;

	for (lower = 0; lower <= 9; lower++)
		putchar(lower + '0');
	putchar('\n');
	return (0);
}
