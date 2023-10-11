#include "search_algos.h"

/**
 * linear_skip - Search for a value in a sorted skip list.
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where
 * 'value' is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *prev, *express;

if (!list)
	return (NULL);

express = list;

while (express->next && express->n < value)
{
prev = express;
if (express->express == NULL)
{
while (express->next)
	express = express->next;
break;
}
express = express->express;
printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
}

printf("Value found between indexes [%lu] and [%lu]\n", prev->index, express->index);

while (prev != NULL && prev->index <= express->index)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
if (prev->n == value)
	return (prev);
prev = prev->next;
}
return (NULL);
}
