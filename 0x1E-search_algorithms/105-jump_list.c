#include "search_algos.h"

/**
 * jump_list - Search for a value in a sorted list of integers
 * using Jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where 'value' is located,
 * or NULL if absent.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t step, i;

listint_t *prev = NULL;
step = (size_t)sqrt(size);

if (list == NULL)
	return (NULL);

while (list->next != NULL && list->n < value)
{
prev = list;
for (i = 0; i < step && list->next != NULL; i++)
	list = list->next;
printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
}

printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, list->index);

while (prev != NULL)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
if (prev->n == value)
	return (prev);
prev = prev->next;
}
return (NULL);
}
