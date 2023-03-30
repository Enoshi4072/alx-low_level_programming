#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
int num1 = 0, num2 = n - 1;
while (num1 < num2)
{
int temporary = a[num1];
a[num1] = a[num2];
a[num2] = temporary;
num1++;
num2--;
}
}
