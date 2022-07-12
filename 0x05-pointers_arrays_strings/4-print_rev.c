#include "main.h"

/**
 * print_rev - function that prints a string in reverse followed by a new line
 * @s: The string
 */
void print_rev(char *s)
{
	/*find out the length*/
	int len = 0;

	while (s[len])
		len++;

	/*print backwards*/
	while (--len >= 0)
		_putchar(s[len]);
	_putchar('\n');
}
