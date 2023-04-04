#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the first node in the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr_current, *holder_ptr;
	size_t total = 0;

	if (h == NULL)
		return (total);

	ptr_current = *h;
	while (ptr_current != NULL)
	{
	total++;
	holder_ptr = ptr_current;
	ptr_current = ptr_current->next;
	free(holder_ptr);
	if (holder_ptr <= ptr_current)
		break;
	}
	*h = NULL;
	return (total);
}
