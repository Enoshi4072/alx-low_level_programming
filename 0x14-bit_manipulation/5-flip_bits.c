#include "main.h"
/**
 * flip_bits - returns the number of bits one would flip
 * to get from one given number to another
 * @n: The first number in decima
 * @m: The second number in decimal
 *
 * Return: The number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total_count = 0;
	unsigned long int h_val;

	h_val = n ^ m;
	while (h_val > 0)
	{
		total_count = total_count + (h_val & 1);
	       h_val = h_val >> 1;
	}
return (total_count);
}
