#include <stdio.h>
/**
 * main -Prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0
 */
int main(void)
{
int number = 0;
while (number < 10)
{
putchar(number + '0');
number++;
}
putchar('\n');
return (0);
}
