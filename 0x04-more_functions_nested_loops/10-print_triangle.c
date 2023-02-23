#include "main.h"
/**
 * print_triangle - The function prints a triangle,
 * This is followed by a new line
 * @size: Refers to the size of the triangle
 */
void print_triangle(int size)
{
int i;
int j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
