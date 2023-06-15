#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning of a
 * linked list
 * @head: Pointer to head of a linked list
 * @n: The interger of the node to add
 *
 * Return: Pointer to the new node created
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *temp;

	temp = *head;

	if (!head)
		return (NULL);
	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	n_node->prev = NULL;
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	temp->prev = n_node;
	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;
	return (n_node);
}
