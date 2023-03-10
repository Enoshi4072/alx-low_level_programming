#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *ptr_hay, *ptr_need;
while (*haystack)
{
ptr_hay = haystack;
ptr_need = needle;

while (*ptr_hay && *ptr_need && (*ptr_hay == *ptr_need))
{
ptr_hay++;
ptr_need++;
}
if (!*ptr_need)
return (haystack);
haystack++;
}
return (NULL);
}
