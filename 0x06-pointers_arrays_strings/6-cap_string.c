#include "main.h"

/**
 * cap_string - capitalizes every
 * word of a string
 * @cap_next: string to modify
 * @str: The string to be returned
 * Return: the resulting string
 */

char *cap_string(char *str)
{
int i = 0;
int cap_next = 1;
while (str[i] != '\0')
{
if (cap_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= ('a' - 'A');
}
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}') {
cap_next = 1;
}
else
{
cap_next = 0;
}
i++;
}
return (str);
}
