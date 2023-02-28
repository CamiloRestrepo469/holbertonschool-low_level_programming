#include "main.h"
/**
 * swap_int - funtion that swaps
 * the values of two integers
 * @a: save value
 * @b: save swaps
 *
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
