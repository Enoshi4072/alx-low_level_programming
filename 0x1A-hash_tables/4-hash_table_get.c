#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to be looked into
 * @key: The key being looked for
 *
 * Return: The value associated with the element
 * or NULL if the key cannot be found
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *val_hold;


	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	val_hold = ht->array[index];

	/* Searching for the key in the linked list */
	while (val_hold != NULL)
	{
		if (strcmp(val_hold->key, key) == 0)
			return (val_hold->value);
		val_hold = val_hold->next;
	}
	return (NULL);
}
