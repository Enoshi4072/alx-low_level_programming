#include "main.h"
/**
 * print_numbers - The function prints the numbers, from 0 to 9,
 * a new line follows
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
