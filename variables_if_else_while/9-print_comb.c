#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int numero;

	for (numero = 0; numero <= 9; numero++)
	{
		putchar((numero % 10) + '0');
		if (numero == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
