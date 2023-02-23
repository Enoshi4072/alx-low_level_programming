#include "main.h"
/**
 * print_diagonal - The function draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
int num1, num2;
if (n <= 0)
{
_putchar('\n');
return;
}

for (num1 = 0; num1 < n; num1++)
{
for (num2 = 0; num2 < num1; num2++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
