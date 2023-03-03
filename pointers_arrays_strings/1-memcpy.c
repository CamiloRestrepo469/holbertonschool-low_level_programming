#include <stdio.h>
#include "main.h"

/**
 * _memset - library provides a similar
 * @dest: the address of memory to print
 * @n: the size of the memory to print
 * @src: bytes from memory area
 *
 * Return: 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n && src[i]; i++)
{
dest[i] = src[i];
}
return (dest);
}
