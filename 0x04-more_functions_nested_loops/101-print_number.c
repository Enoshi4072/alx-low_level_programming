#include "main.h"

/**
 * print_number - The function prints an integer
 * @n: int to be printed
 */
void print_number(int n)
{
unsigned int num_a;

if (n < 0)
{
num_a = -n;
_putchar('-');
}
else
{
num_a = n;
}

if (num_a / 10)
{
print_number(num_a / 10);
}
_putchar((num_a % 10) + '0');
}
