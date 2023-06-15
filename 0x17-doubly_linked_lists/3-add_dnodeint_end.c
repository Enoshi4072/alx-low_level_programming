#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end
 * of alinked list
 * @head: Pointer to the head of a linked list
 * @n: The integer of the node to add
 * Return: Pointer to the new node created
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *temp;

	if (!head)
		return (NULL);
	temp = *head;
	n_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->prev = NULL;
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n_node;
	n_node->prev = temp;
	return (n_node);
}
