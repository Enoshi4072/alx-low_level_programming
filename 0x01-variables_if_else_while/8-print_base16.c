#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always 0
 */
int main(void)
{
char hexadecimal[16] = "0123456789abcdef";
int i = 0;
while (i < 16)
{
putchar(hexadecimal[i]);
i++;
}
putchar('\n');
return (0);
}
