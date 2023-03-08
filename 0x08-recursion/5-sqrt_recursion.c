#include "main.h"
#include <stdio.h>
/**
 * helperfunc - The function implements binary search
 * to find the natural square root of a number
 * @n: the number to calculate the square root
 * @low: the lower boundary of the range to be searched
 * @high: the upper boundary of the range to be searched *
 * Return: the resulting square root,
 * or -1 if n does not have a natural square root
 */

int helperfunc(int n, int low, int high)
{
int center = (low + high) / 2;
int square = center * center;

if (low > high)
{
return (-1);
}
if (square == n)
{
return (center);
}
else if
(square < n)
{
return (helperfunc(n, center + 1, high));
}
else
{
return (helperfunc(n, low, center - 1));
}
}
/**
 * _sqrt_recursion - The function returns the
 * natural square root of a number
 * @n: number which the squareroot is calculated
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)

return (-1);
else
{
return (helperfunc(n, 0, n / 2 + 1));
}
}
