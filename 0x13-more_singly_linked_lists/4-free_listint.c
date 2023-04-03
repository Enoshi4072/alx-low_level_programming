#include "lists.h"
/**
 * free_listint - frees al listint_t
 * @head: Pointer to the first element in the list
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *node_ptr;

	while (head != NULL)
	{
		node_ptr = head->next;
		free(head);
		head = node_ptr;
	}
}
