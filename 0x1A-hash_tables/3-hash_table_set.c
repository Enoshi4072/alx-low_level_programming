#include "hash_tables.h"

/**
 * hash_table_set - Adds a given element to a hash table
 * @ht: The hash table where the value or key is added to
 * @key: The key to add to the hash table
 * @value: The value related to the key to be
 * added to a hash table
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *val_hold;
	hash_node_t *n_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	val_hold = ht->array[index];

	/* Check for the key */
	while (val_hold != NULL)
	{
		if (strcmp(val_hold->key, key) == 0)
		{
			free(val_hold->value);
			val_hold->value = strdup(value);
			if (val_hold->value == NULL)
				return (0);
			return (1);
		}
		val_hold = val_hold->next;
	}
	/* New node */
	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
		return (0);
	/* Key duplication */
	n_node->key = strdup(key);
	if (n_node->key == NULL)
	{
		free(n_node);
		return (0);
	}

	/* Val duplication */
	n_node->value = strdup(value);
	if (n_node->value == NULL)
	{
		free(n_node->key);
		free(n_node);
		return (0);
	}
	/* n_node beginning */
	n_node->next = ht->array[index];
	ht->array[index] = n_node;
	return (1);
}
