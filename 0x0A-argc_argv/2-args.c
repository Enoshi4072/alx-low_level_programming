#include <stdio.h>

/**
 * main - prints all the arguments it recieves
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
