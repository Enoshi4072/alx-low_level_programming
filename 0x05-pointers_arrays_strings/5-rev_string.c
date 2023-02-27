#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temporary;
	int i, size, length;

	size = 0;
	length = 0;

	while (s[size] != '\0')
	{
		size++;
	}

length = size - 1;

i = 0;
while (i < size / 2)
{
temporary = s[i];
s[i] = s[length];
s[length--] = temporary;
i++;
}
}
