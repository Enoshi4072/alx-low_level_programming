#include "lists.h"

/**
 * print_dlistint - Prints all elements of a
 * doubly linked list
 * @h: Pointer to the start of the node
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
