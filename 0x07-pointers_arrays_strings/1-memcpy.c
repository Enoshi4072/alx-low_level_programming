#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: number of bytes to copy *
 * Return: pointer to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int num;

for (num = 0; num < n; num++)
dest[num] = src[num];
return (dest);
}
