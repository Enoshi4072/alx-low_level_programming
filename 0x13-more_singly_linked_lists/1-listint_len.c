#include "lists.h"
/**
 * listint_len - return the head of elements in listint_t list
 * @h: tag for the list whose length is to be found
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
