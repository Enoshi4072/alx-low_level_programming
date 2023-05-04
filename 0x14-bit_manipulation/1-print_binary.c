#include "main.h"
/**
 * print_binary - Prints the bibary representation of a number
 * @n: The number whose binary representation is printed
 */
void print_binary(unsigned long int n)
{
        int i, counter = 0;
        int val_default = 1;

        if (n == 0)
        {
        _putchar('0');
        return;
        }

        for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
        {
        if ((n >> i) & val_default)
        {
        _putchar('1');
                counter++;
        }
        else if (counter)
        {
        _putchar('0');
        }
        }
}
