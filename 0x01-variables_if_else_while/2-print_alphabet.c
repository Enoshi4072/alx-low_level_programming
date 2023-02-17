#include <stdio.h>
/**
 * main - prints alphabet characters in lowercase
 * Return: Always 0
 */
int main(void)
{
char lower_case = 'a';
while (lower_case <= 'z')
{
	putchar(lower_case);
	lower_case++;
}
putchar('\n');
return (0);
}
