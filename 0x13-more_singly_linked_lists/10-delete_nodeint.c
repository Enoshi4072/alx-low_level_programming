#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a
 * linked list at a certain index
 * @head: Pointer to the first node of the list
 * @index: The position of the node to be deleted
 * Return: 1 id successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_del;
	listint_t *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	node_to_del = *head;
	prev = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
	}
	for (i = 0; i <= index - 1; i++)
	{
		prev = node_to_del;
		node_to_del = node_to_del->next;
		if (node_to_del == NULL)
			return (-1);
	}
	if (node_to_del != NULL)
	{
		if (node_to_del == *head)
			*head = (*head)->next;
		prev->next = node_to_del->next;
		node_to_del->next = NULL;
		free(node_to_del);
		return (1);
	}
	else
	{
		return (-1);
	}
}
