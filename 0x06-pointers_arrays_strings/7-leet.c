#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
int num1, num2;

char *numA = "aAeEoOtTlL";
char *numB = "4433007711";
num1 = 0;
while (s[num1] != '\0')
{
for (num2 = 0; num2 < 10; num2++)
{
if (s[num1] == numA[num2])
{
s[num1] = numB[num2];
}
}
num1++;
}
return (s);
}
