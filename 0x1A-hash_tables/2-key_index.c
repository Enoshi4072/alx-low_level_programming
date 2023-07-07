#include "hash_tables.h"

/**
 * key_index - computes the index of a key in a give hash table array
 * @key: The key char
 * @size: The arrays size in the given hash table
 *
 * Return: The index of the key in the given array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int h_val;

	h_val = hash_djb2(key);
	index = h_val % size;

	return (index);
}
