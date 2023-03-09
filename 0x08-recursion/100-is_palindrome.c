#include "main.h"

/**
 * recur_len - The function returns the length of a string
 * @s: string whose length is to be calculated
 * Return: length of the string
 */
int recur_len(char *s)
{
if (*s == '\0')
return (0);
return (1 + recur_len(s + 1));
}

/**
 * pali_checker - The function to check characters,
 * recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len_string: length of the string *
 * Return: 1 if palindrome, 0 if not
 */
int pali_checker(char *s, int i, int len_string)
{
if (*(s + i) != *(s + len_string - 1))
return (0);
if (i >= len_string)
return (1);
return (pali_checker(s, i + 1, len_string - 1));
}


/**
 * is_palindrome - The function checks if a string is a palindrome
 * @s: string to reverse *
 * Return: 1 if it is, if not 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (pali_checker(s, 0, recur_len(s)));
}
