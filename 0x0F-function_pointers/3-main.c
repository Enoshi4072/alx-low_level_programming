#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int f_argu, s_argu, answer;
char operator;
int (*ptr_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
f_argu = atoi(argv[1]);
s_argu = atoi(argv[3]);
ptr_func = get_op_func(argv[2]);
if (!ptr_func)
{
printf("Error\n");
exit(99);
}
operator = *argv[2];
if ((operator == '/' || operator == '%') && s_argu == 0)
{
printf("Error\n");
exit(100);
}
answer = ptr_func(f_argu, s_argu);
printf("%d\n", answer);
return (0);
}
