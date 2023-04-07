#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to integer whose bit value is to be set to 0
 * @index: The position of the bit to set to 0
 * Return: 1 if it successful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int h_val;

	h_val = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~h_val;
	return (1);
}
