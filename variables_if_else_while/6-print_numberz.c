#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int numero;

	for (numero = 0; numero < 10; numero++)
		putchar((numero % 10) + '0');

	putchar('\n');

	return (0);
}
