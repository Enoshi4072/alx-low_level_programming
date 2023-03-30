#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - The function searches a string,
 * for any of a set of bytes.
 * @s: The string to search for.
 * @accept: The bytes to be matched.
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * ,NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
char *rec;

while (*s)
{
for (rec = accept; *rec; rec++)
{
if (*s == *rec)
return (s);
}
s++;
}
return (NULL);
}
