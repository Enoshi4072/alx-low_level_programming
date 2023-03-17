#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * check_if_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int check_if_digit(char *s)
{
int i;

for (i = 0; s[i]; i++)
{
if (s[i] < '0' || s[i] > '9')
	return (0);
}
return (1);
}

/**
 * mis - handles errors for main
 */
void mis(void)
{
printf("Error\n");
exit(98);
}

/**
 * length_string - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int length_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
return (i);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *ptr_1, *ptr_2;
int size1, size2, size_origi, i, add, num1, num2, *answer, total = 0;
ptr_1 = argv[1], ptr_2 = argv[2];
if (argc != 3 || !check_if_digit(ptr_1) || !check_if_digit(ptr_2))
	mis();
size1 = length_string(ptr_1);
size2 = length_string(ptr_2);
size_origi = size1 + size2 + 1;
answer = malloc(sizeof(int) * size_origi);
if (!answer)
	return (1);
i = 0;
while (i <= size1 + size2)
{
answer[i] = 0;
i++;
}
size1--;
while (size1 >= 0)
{
num1 = ptr_1[size1] - '0';
add = 0;
size2 = length_string(ptr_2) - 1;
while (size2 >= 0)
{
num2 = ptr_2[size2] - '0';
add += answer[size1 + size2 + 1] + (num1 *num2);
answer[size1 + size2 + 1] = add % 10;
add /= 10;
size2--;
}
if (add > 0)
	answer[size1 + size2 + 1] += add;
size1--;
}
i = 0;
while (i < size_origi - 1)
{
if (answer[i])
	total = 1;
if (total)
	_putchar(answer[i] + '0');
i++;
}
if (!total)
	_putchar('0');
_putchar('\n');
free(answer);
return (0);
}
