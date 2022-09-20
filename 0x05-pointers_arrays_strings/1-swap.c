#include "main.h"

/**
 * swap_int - This function swaps two values
 * @a: integer to be changed to y
 * @b: integer to be changed to x
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *temp = a;
	*a = *b;
	*b = *temp;
}
