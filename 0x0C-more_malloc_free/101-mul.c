#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * check_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int check_digit(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
	return (0);
i++;
}
return (1);
}

/**
 * len_string - returns the length of a string
 * @s: string to evaluate *
 * Return: the length of the string
 */
int len_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
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
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *ptr_1, *ptr_2;
int size1, size2, size, i, add, num1, num2, *answer, all = 0;

ptr_1 = argv[1], ptr_2 = argv[2];
if (argc != 3 || !check_digit(ptr_1) || !check_digit(ptr_2))
	mis();
size1 = len_string(ptr_1);
size2 = len_string(ptr_2);
size = size1 + size2 + 1;
answer = malloc(sizeof(int) * size);
if (!answer)
	return (1);
for (i = 0; i <= size1 + size2; i++)
	answer[i] = 0;
for (size1 = size1 - 1; size1 >= 0; size1--)
{
num1 = ptr_1[size1] - '0';
add = 0;
for (size2 = len_string(ptr_2) - 1; size2 >= 0; size2--)
{
num2 = ptr_2[size2] - '0';
add += answer[size1 + size2 + 1] + (num1 *num2);
answer[size1 + size2 + 1] = add % 10;
add /= 10;
}
if (add > 0)
	answer[size1 + size2 + 1] += add;
}
for (i = 0; i < size - 1; i++)
{
if (answer[i])
	all = 1;
if (all)
	_putchar(answer[i] + '0');
}
if (!all)
	_putchar('0');
_putchar('\n');
free(answer);
return (0);
}
