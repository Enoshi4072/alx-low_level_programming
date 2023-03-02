#include "main.h"

/**
 * leet - encodes a string in 1337
 * @str: string to be encoded
  * Return: the resulting string;
 */

char *leet(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; "aeotlAEOTL"[j] != '\0'; j++)
{
if (str[i] == "aeotlAEOTL"[j])
{
str[i] = "43071"[j];
break;
}
}
}
return (str);
}
