#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The program that generates random valid
 * passwords for the program 101-crackme *
 * Return: Always 0 (Success)
 */
int main(void)
{
int password[100];
int num, total, num2;

total = 0;

srand(time(NULL));

while (num < 100)
{
password[num] = rand() % 78;
total += (password[num] + '0');
putchar(password[num] + '0');
if ((2772 - total) -'1' < 78)
{
num2 = 2772 - total - '0';
total += num2;
putchar(num2 + '0');
break;
}
num++;
}

return (0);
}
