#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n:The pointer to interger whose bit value is to be set to 1
 * at a given index
 * @index: The position of the bit you ant to set to 1
 * Return:1 is success, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int h_val = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | h_val;
	return (1);
}
