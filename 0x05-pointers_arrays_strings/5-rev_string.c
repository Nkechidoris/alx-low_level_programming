
#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: The string
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp;

	/* find the length */
	while (s[len])
		len++;

	/* swap each character */
	i = len;
	while (--i >= len / 2)
	{
		j = len - i - 1;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

	}
}
