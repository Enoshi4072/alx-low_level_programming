/**
 * helperfunc - The function utilizes a binary search to find a natural
 * square root of a number.
 * @low: The lower boundary of the integer range to search for.
 * @high: The upper boundary of the integer range to search for.
 * @n: The number whose range is to be calculated.
 * Return: The resulting square root.
 */
int helperfunc(int n, int low, int high)
{
int center = (low + high) / 2;
int square = center * center;

if (low > high)
{
return (-1);
}
if (square == n)
{
return (center);
}
else if (square < n)
{
return (helperfunc(n, center + 1, high));
}
else
{
return (helperfunc(n, low, center - 1));
}
}

/**
 * _sqrt_recursion - The function returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 *
 * Return: The resulting square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (helperfunc(n, 0, n / 2));
}
}
