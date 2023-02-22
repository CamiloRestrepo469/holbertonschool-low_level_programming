#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase,
 * followed by a new
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
