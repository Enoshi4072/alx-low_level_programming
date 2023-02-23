#include <stdio.h>
#include <math.h>

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
