#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *ht_node;
	int indicator = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ht_node = ht->array[i];
		while (ht_node != NULL)
		{
			if (indicator)
				printf(", ");

			printf("'%s': '%s'", ht_node->key, ht_node->value);
			indicator = 1;
			ht_node = ht_node->next;
		}
	}
	printf("}\n");
}
