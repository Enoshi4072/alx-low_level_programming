#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: Pointer to the newly created array
 * or NULL if it failed
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Allocate the memory to the table */
	unsigned long int i;
	hash_table_t *h_table;

	h_table =  malloc(sizeof(hash_table_t));
	/* Check if the allocation was successful */
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;

	/* Allocate memory for the array */
	h_table->array = malloc(sizeof(hash_node_t *) * size);

	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;
	return (h_table);
}
