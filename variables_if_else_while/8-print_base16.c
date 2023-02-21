#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int numero;
	char i;

	for (numero = 0; numero < 10; numero++)
		putchar((numero % 10) + '0');

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
