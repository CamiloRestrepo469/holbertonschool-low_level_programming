#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copiar el contenido de una a otra variable
 *
 * @dest: vaules
 * @src: add
 *
 * Return: this is the copy
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
