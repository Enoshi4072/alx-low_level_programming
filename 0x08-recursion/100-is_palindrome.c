#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len_string = 0, i = 0;
while (s[len_string] != '\0')
len_string++;
if (len_string <= 1)
return (1);
if (s[0] == s[len_string - 1])
return (is_palindrome(s + 1, len_string - 2));
return (0);
}

/**
 * pali_recur - helper function for is_palindrome
 * @s: the substring to check
 * @len_string: the length of the substring *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int pali_recur(char *s, int len_string)
{
if (len_string <= 1)
return (1);
if (s[0] == s[len_string - 1])
return (pali_recur(s + 1, len - 2));
return (0);
}
