#include "main.h"

/**
 * print_alphabet - This is the main function
 *
 * Return: - Returns void
 */
void print_alphabet_x10(void)
{

	int ti;
	char ch;
	ti = 0;
	
	for (ti = 0; ti <= 9; ti++)
	{for (ch = 'a'; ch <= 'z'; ch++) 
		{_putchar(ch);
			_putchar('\n');}
	}
}	
	

