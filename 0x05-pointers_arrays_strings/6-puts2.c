#include "main.h"

/**
 * puts2 - prints alternate character
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int size, i;

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
i = 0;
while (i < size)
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
