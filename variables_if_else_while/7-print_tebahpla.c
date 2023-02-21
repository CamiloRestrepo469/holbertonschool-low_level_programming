#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
