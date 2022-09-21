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
			ch = 'a';
		       while(ch <= 'z'){
				_putchar(ch);
				_putchar('\n');
				ch = ch + 1;}
		}
	ti = ti + 1;
	}
}
