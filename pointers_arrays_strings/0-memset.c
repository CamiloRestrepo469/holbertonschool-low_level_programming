#include "main.h"
/**
 * _memset- a function that fills memory with a constant byte
 *@s:bytes of the memory area pointed to by
 *@n:function fills the first
 *@b:with the constant byte
 *
 *Return: 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
