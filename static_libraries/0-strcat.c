#include "main.h"
#include <stdio.h>

/**
 * strcat - unction appends the src
  string to the dest string,
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string  appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = dest[j];
i++;
}
dest[i] = '\0';
return (dest);
}
