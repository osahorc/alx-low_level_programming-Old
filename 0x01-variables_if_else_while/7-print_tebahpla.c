#include <stdio.h>

/**
 * main:- This is the main function
 * Description: This program shows positive of negative numbers
 * Return:0 - Returns Zero
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');
	return (0);
}
