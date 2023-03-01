#include "main.h"

/**
 * puts_half - prints half of a string, followed
 *  by a new line
 *  @str: save values
 *
 *  Return: 0.
 */

void puts_half(char *str)
{
	int i, j;
	int n;
	int length = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	n = length / 2;
	for (j = n; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
