#include <stdio.h>

/**
 *main -> assign a number to the variable n each time it is executed
 *and print the last digit of the number stord in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); /* thks is an ascii code for new line*/
	return (0);
}
