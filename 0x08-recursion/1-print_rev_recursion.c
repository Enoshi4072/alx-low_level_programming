#include "main.h"

/**
 * _print_rev_recursion - The function prints a string in reverse
 * @s: Is the string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
