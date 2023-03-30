#include "main.h"

/**
 * div_checker - checks if a number has a divisor
 * @n: number to check
 * @div: the divisor to check
 * Return: 1 if n has divisor, otherwise 0
 */
int div_checker(int n, int div)
{
if (n % div == 0)
return (1);
else if (div == n / 2)
return (0);
else
return (div_checker(n, div + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else if (n == 2)
return (1);
else
return (div_checker(n, 2) == 0);
}
