#include "main.h"

/**
 * print_alphabet - This is the main function and it prints all alphabets in lo
 *
 * Return: Returns void
 */
void print_alphabet(void)
{
	int c;
	
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return;
}
