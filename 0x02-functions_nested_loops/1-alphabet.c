#include "main.h"

/**
 * print_alphabet - print alphabets in lower case followed by a new line
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;


	}
	_putchar('\n');

}
