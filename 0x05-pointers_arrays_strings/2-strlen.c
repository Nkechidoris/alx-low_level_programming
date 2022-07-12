#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
