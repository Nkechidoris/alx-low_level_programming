#include "main.h"

/**
 * #strncat - concatenates two strings
 * @dest: concatenated string
 * @src: appended string to dest
 * @n:bytes
 * Return: dest
 */
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
