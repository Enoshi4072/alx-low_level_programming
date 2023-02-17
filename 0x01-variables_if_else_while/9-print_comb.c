#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
int a, b;
for (a = 0; a <= 9; a++)
{
for (b = a; b <= 9; b++)
{
putchar(a + '0');
putchar(b + '0');
if (a != 9 || b != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
