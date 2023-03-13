#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - a function that returns a
  *  pointer to a 2 dimensional array of integers 
  * @width: width
  * @height: height
  *
  * Return: 0.
  */
int **alloc_grid(int width, int height)
{
int i = 0, j, k, l;
int **c;

if (width <= 0 || height <= 0)
return (NULL);

c = malloc(sizeof(int *) * height);

if (c == NULL)
{
free(c);
return (NULL);
}

while (i < height)
{
c[i] = malloc(sizeof(int) * width);

if (c[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(c[j]);
}

free(c);
return (NULL);
}
i++;
}

for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
c[k][l] = 0;
}
}

return (c);
}
