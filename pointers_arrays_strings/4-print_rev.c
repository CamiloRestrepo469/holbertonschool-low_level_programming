#include "main.h"
/**
* print_rev - a function that prints a string, in reverse, followed new line.
* @s: void vale add.
* return 0
*/
void print_rev(char *s)
{
int count;
for (count = 0; s[count] != '\0'; count++)
;
for (count = count - 1; s[count] != '\0'; count--)
{
_putchar(s[count]);
}
_putchar('\n');
}
