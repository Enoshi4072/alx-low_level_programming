#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The value which the bit will be gotten
 * @index: The position of the bit to get
 * Return: The value of the bit at index index,
 * or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
        unsigned long int def_val;

        if (index >= sizeof(unsigned long int) * 8)
                return (-1);
        def_val = 1 << index;
        if (n & def_val)
                return (1);
        else
                return (0);
}
