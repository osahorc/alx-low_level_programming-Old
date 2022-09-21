#include "main.h"

/**
 * print_alphabet - This is the main function
 *
 * Return: - Returns void
 */
void print_alphabet_x10(void)
{
	int d;
	d = 0;
	while (d <= 9) 
	{
	int c;
	c = 'a';
	while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
