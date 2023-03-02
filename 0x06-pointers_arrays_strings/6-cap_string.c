#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
int num1, num2;

char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (num1 = 0; s[num1] != '\0'; num1++)
	{
		if (num1 == 0 && s[num1] >= 'a' && s[num1] <= 'z')
			s[num1] -= 32;

		for (num2 = 0; num2 < 13; num2++)
		{
			if (s[num1] == spe[num2])
			{
				if (s[num1 + 1] >= 'a' && s[num1 + 1] <= 'z')
				{
					s[num1 + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
