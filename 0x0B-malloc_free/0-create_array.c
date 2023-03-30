#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * initilizes the arrays with a given char
 * @size: size of array to create
 * @c: The character to initialize the array
 * Return: Pointer to the array (Success), NULL(Error)
 */

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

if (size == 0)
{
return (NULL);
}
ptr = (char *) malloc(sizeof(char) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
