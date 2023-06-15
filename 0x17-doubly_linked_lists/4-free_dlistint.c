#include "lists.h"

/**
 * free_dlistint - Frees the memory allocated to a linked list
 * @head: Pointer to the head of a linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head->prev = NULL;
		head = head->next;
		free(temp);
	}
}
