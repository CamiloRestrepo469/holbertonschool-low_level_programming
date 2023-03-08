#include "main.h"

/**
 * _strncat - print it will use at most n bytes from src
 * @src: - save values
 * @dest: - save values
 * @n: - contains n or more bytes
 * Return: 0;
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
