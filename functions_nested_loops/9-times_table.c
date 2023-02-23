#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int filas, colunas, d;

	for (filas = 0; filas <= 9; filas++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (colunas = 1; colunas <= 9; colunas++)
		{
			d = (filas * colunas);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');

			}
			else
			{
				_putchar(' ');
			}
			-putchar((d % 10) + '0');

			if (colunas < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
