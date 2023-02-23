#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest,
 * prime factor of the number 612852475143
 * a new line follows
 * Return: Always 0 (Success)
 */
int main(void)
{
long long int target_num = 612852475143;
int maximum_prime_factor = 2;
int num = 2;
while (target_num != 1)
{
if (target_num % num == 0)
{
if (num > maximum_prime_factor)
{
maximum_prime_factor = num;
}
target_num = target_num / num;
}
else
{
num++;
}
}
}
