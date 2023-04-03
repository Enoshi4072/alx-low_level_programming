#include "lists.h"
/**
 * pop_listint - Function that deletes a head node
 * @head: Pointer to pointer to the list to be deleted
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *nodeptr;
	int i;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	nodeptr = (*head)->next;
	free(*head);
	*head = nodeptr;
return (i);
}
