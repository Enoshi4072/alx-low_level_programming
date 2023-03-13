#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
int **ptr;
int i;
int j;
if (height <= 0 || width <= 0)
	return (NULL);
ptr = (int **) malloc(sizeof(int *) * height);
if (ptr == NULL)
	return (NULL);
for (i = 0; i < height; i++)
{
ptr[i] = (int *) malloc(sizeof(int *) * width);
if (ptr[i] == NULL)
{
free(ptr);
for (j = 0; j <= i; j++)
	free(ptr[j]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
