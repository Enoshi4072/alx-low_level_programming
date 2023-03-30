#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
char *ptr;
unsigned int i;
unsigned int length;
i = 0;
length = 0;
if (str == NULL)
{
return (NULL);
}
while (str[length])

	length++;
ptr = malloc(sizeof(char) * (length + 1));

if (ptr == NULL)
{
return (NULL);
}
while ((ptr[i] = str[i]) != '\0')

	i++;

return (ptr);
}
