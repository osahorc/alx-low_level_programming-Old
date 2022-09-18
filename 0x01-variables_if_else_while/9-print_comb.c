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
		if(lower == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar("\n");
	return(0);
}
