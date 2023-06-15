#include "lists.h"

/**
 * dlistint_len - returns the number of
 * elements in a doubly linked list
 * @h: Pointer to the head of a linked list
 * Return: The number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
