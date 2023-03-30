#include "main.h"

/**
 * _strcat - The function concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p)
{
p++;
}
while (*src)
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
