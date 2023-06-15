#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node
 * of a linked list
 * @head: Pointer to the head of a linked list
 * @index: The position of the node to be returned
 * Return: The nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *temp1, *temp;

	temp1 = head;
	temp = head;

	len = 0;
	if (!head)
		return (NULL);
	while (temp1 != NULL)
	{
		len++;
		temp1 = temp1->next;
	}
	if (index > len)
		return (NULL);
	while (index + 1 != 1 && temp->next != NULL)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
