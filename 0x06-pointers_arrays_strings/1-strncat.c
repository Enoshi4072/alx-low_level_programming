#include "main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
char *p = dest;
while (*p)
{
p++;
}

while (*src && i < n)
{
*p++ = *src++;
i++;
}
*p = '\0';
return (dest);
}
