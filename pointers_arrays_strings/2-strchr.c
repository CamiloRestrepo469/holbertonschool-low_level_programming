#include "main.h"
#include <stdio.h>

/**
 * _strchr -a function that
 * locates a character in a string
 * @s: in the string
 * @c: pointer to the first occurrence of the character
 * Return: 0.
*/

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
