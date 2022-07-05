#include "main.h"

/**
 * main - program that prints _putchar followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}

	_putchar('\n');
	return (0);
}
