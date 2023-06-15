#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * @head: Pointer to the beginnig of the node
 * @index: The position at which to delete the node
 * Return: 1 if success, -l if fail
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp1, *temp2, *temp3, *temp4, *temp5, *temp6;
	unsigned int len;

	temp = *head, temp1 = *head, len = 0;
	if (!head)
		return (-1);
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (index > len || len == 0)
		return (-1);
	if (index == 0)
	{
		temp5 = *head;
		temp6 = temp5->next;
		free(temp5);
		*head = temp6;
		return (1);
	}
	while (index + 1 != 1 && temp1->next != NULL)
	{
		temp1 = temp1->next;
		index--;
	}
	if (temp1->next == NULL)
	{
		temp2 = temp1->prev;
		temp2->next = NULL;
		free(temp1);
		return (1);
	}
	temp3 = temp1->prev;
	temp4 = temp1->next;
	temp3->next = temp4;
	temp4->prev = temp3;
	free(temp1);
	return (1);
}
