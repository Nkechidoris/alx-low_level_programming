#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	unsigned int a = n - 1;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", (va_arg(ap, int)));

		if (separator != NULL && i < a)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
