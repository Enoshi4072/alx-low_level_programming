#include "main.h"

/**
 * print_number - the function prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
unsigned int number;

if (n < 0)
{
_putchar('-');
number = -n;
}
else
{
number = n;
}

if (number / 10)
{
print_number(number / 10);
}
_putchar((number % 10) + '0');
}
