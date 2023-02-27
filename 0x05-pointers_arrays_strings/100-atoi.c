#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
#include <stdio.h>

int _atoi(char *s)
{
int  auth = 1;
int number = 0;
int number2;

while (*s)
{
if (*s == '-')
auth *= -1;
else if (*s >= '0' && *s <= '9')
{
number2 = *s - '0';
number = number * 10 + number2;
}
else if (number > 0)
break;
s++;
}

return (number *auth);
}
