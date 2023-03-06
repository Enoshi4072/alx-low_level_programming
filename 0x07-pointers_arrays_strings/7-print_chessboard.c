#include "main.h"

/**
 * print_chessboard - The funtion prints a chessboard
 * @a: the chessboard to print *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i, j;
i = 0;
while (i < 8)
{
for (j = 0; j < 8; j++)
_putchar(a[i][j]);
_putchar('\n');
i++;
}
}
