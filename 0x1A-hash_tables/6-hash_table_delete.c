#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ht_node, *val_hold;
	unsigned int i;
	
	if (ht == NULL)
		return;

	/* Loop through each node */
	for (i = 0; i < ht->size; i++)
	{
		ht_node = ht->array[i];
		while (ht_node != NULL)
		{
			val_hold = ht_node;
			ht_node = ht_node->next;
			free(val_hold->key);
			free(val_hold->value);
			free(val_hold);
		}
	}
	free(ht->array);
	free(ht);
}
