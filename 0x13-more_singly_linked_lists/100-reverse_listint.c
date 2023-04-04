#include "lists.h"
/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the first node of the list
 * Return: Pointer to the first node of the reverdes list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_prev, *ptr_current;

	if (*head)
	{
		ptr_prev = *head;
		ptr_current = (*head)->next;
		*head = (*head)->next;

		ptr_prev->next = NULL;
		while (*head)
		{
			*head = (*head)->next;
			ptr_current->next = ptr_prev;

			ptr_prev = ptr_current;
			ptr_current = *head;
		}
		*head = ptr_prev;
	}
	return (*head);
}
