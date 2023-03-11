#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the name of the program
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0(Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int sum = atoi(argv[1]) + atoi(argv[2]);
printf("%d", sum);
return (0);
}
