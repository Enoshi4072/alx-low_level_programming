#include "main.h"
/**
 * _isdigit - The function checks for a digit from 0 to 9)
 * @c: The integer to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
