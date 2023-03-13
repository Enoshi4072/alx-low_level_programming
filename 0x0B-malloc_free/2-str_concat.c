#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: The second string to concatenate
 * Return: Pointer to the new string created. 0 (Successs) or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
char *ptr;
unsigned int i;
unsigned int j;
unsigned int length1;
unsigned int length2;
i = 0;
j = 0;

while (s1 && s1[length1])
	length1++;
while (s2 && s2[length2])
	length2++;
ptr = malloc(sizeof(char) * (length1 + length2 + 1));
if (ptr == NULL)
	return (NULL);
if (s1)
{
while (i < length1)
{
	ptr[1] = s1[i];
		i++;
}
}
if (s2)
{
while (i < (length1 + length2))
{
ptr[i] = s2[j];
i++;
j++;
}
}
ptr[i] = '\0';
return (ptr);
}
