#include "main.h"

/**
 * base_recursion - recursively finds the natural
 * square root of a number
 * @n: number to whose squareroot is calculated
 * @i: iterator
 * Return: the resulting square root
 */
int base_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (base_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (base_recursion(n, 0));
}
