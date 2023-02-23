#include <stdio.h>
/**
 * main - prints numbers from 1 to 100, a new line follows
 * for multiples of three, instead of printing the number,
 * it prints Fizz, and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz ");
}
else if (num % 3 == 0)
{
printf("Fizz ");
}
else if (num % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", num);
}
}
printf("\n");
return (0);
}
