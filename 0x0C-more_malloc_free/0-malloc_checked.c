#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - the function allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
