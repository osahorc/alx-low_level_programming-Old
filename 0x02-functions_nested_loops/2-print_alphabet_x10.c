#include "main.h"

/**
 * print_alphabet - This is the main function
 *
 * Return: - Returns void
 */
void print_alphabet_x10(void)
{
	int ti;
	ti = 0;
	while (ti <= 9)
		{
			char ch; 
			for (ch = 'a'; ch <= 'z'; ch++)
				_putchar(ch);
				_putchar('\n');
		}
	ti = ti + 1;
	}
}
