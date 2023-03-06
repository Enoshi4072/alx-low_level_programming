#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - The function prints the sum
 * of the two diagonals
 * of a square matrix of integers
 * @a: The square matrix in which
 * the sum of diagonals in printed
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
int total_a = 0, total_b = 0;
int i;
i = 0;
while (i < size)
{
total_a += *(a + i*size + i);
total_b += *(a + i*size + (size-i-1));
i++;
}
printf("%d, %d\n", total_a, total_b);
}
