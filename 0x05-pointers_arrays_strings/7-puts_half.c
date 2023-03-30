#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
int size, i, n;

size = 0;

while (str[size] != '\0')
{
size++;
}

if (size % 2 == 0)
{
i = size / 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
else if (size % 2)
{
n = (size - 1) / 2;
while (n < size - 1)
{
_putchar(str[n + 1]);
n++;
}
}
_putchar('\n');
}
