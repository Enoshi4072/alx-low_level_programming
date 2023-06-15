#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all elements
 * in a linked list
 * @head: Pointer to the head of the linked list
 * Return: The sum of all the elements of the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum = sum + (temp->n);
		temp = temp->next;
	}
	return (sum);
}
