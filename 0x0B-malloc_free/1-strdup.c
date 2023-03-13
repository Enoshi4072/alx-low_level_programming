#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *ptr;
unsigned int i;
if (str == NULL)
{
return (NULL);
}
ptr = (char *) malloc(strlen(str) + 1);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; (str[i] = '\0'); i++)
{
ptr[i] = str[i];
}
ptr[i] = '\0';
return (ptr);
}
