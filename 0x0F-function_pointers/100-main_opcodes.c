#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i;
int bytes_num;
char *ptr_h;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes_num = atoi(argv[1]);
if (bytes_num < 0)
{
printf("Error\n");
exit(2);
}
ptr_h = (char *) main;
for (i = 0; i < bytes_num; i++)
{
if (i == bytes_num - 1)
{
printf("%02hhx\n", ptr_h[i]);
break;
}
printf("%02hhx ", ptr_h[i]);
}
return (0);
}
