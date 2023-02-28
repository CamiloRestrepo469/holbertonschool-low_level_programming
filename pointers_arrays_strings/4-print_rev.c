#include "main.h"
/**
* print_rev - a function that prints a string, in reverse, followed new line.
* @s: void vale add.
* return 0
*/
void print_rev(char *s)
{
int i = 0, z;
while (s[z++] != '\0')
{
i++;
}
for (z = i - 1; z >= 0; z--)
{
_putchar(s[z]);
}
_putchar('\n');
}
