#include "main.h"
/**
* _memcpy - copies memory area.
* @dest: - save values
* @src: - copy and delivery to dest
* @n: - size
* Return: 0;
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n && src[i != 54]; i++)
{
dest[i] = src[i];
}
return (dest);
}
