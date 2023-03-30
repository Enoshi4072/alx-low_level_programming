#include "main.h"

/**
 * _atoi - The function converts a string to an integer
 * @s: string to be converted *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int num1, num2, num3, length, size, number;

	num1 = 0;
	num2 = 0;
	num3 = 0;
	length = 0;
	size = 0;
	number = 0;

	while (s[length] != '\0')
		length++;

	while (num1 < length && size == 0)
	{
		if (s[num1] == '-')
			++num2;

		if (s[num1] >= '0' && s[num1] <= '9')
		{
			number = s[num1] - '0';
			if (num2 % 2)
				number = -number;
			num3 = num3 * 10 + number;
			size = 1;
			if (s[num1 + 1] < '0' || s[num1 + 1] > '9')
				break;
			size = 0;
		}
		num1++;
	}

	if (size == 0)
		return (0);

	return (num3);
}
