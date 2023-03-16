#include <stdlib.h>

/**
 * memory_set - fills memory with a constant byte
 * @ptr: pointer to the memory area to be filled
 * @val: value to be set
 * @size: number of bytes to be set to val *
 * Return: pointer to the memory area ptr
 */
char *memory_set(char *ptr, char val, unsigned int size)
{
	unsigned int i;
for (i = 0; i < size; i++)
{
*(ptr + i) = val;
}

return (ptr);
}

/**
 * _calloc - allocates memory for an array
 * of nmemb elements, each of size bytes
 * @nmemb: number of elements
 * @size: size of each element *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

memory_set(ptr, 0, nmemb * size);

return (ptr);
}
