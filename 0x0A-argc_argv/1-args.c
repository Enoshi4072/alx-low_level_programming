#include <stdio.h>

/**
 * main - prints the number arguments passed.
 * to the program
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
