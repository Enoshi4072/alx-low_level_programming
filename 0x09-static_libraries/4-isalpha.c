#include "main.h"

/**
 * _isalpha - The function checks for alphabetic character
 * @c: the alphabet to be checked
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
        return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
