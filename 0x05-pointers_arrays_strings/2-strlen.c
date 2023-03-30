#include "main.h"

/**
 * _strlen - the function returns the length of a string
 * @s: string which its length is determined
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
