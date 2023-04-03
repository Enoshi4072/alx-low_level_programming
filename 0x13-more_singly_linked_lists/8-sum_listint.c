#include "lists.h"
/**
 * sum_listint - finds the sum of all intergers in a linked list
 * @head: The list which contains the data tp find the sum
 *
 * Return: The sum of all data
 */
int sum_listint(listint_t *head)
{
	int addition = 0;
	listint_t *ptrnode;

	if (head == NULL)
		return (0);
	ptrnode = head;
	while (ptrnode != NULL)
	{
		addition = addition + ptrnode->n;
		ptrnode = ptrnode->next;
	}
	return (addition);
}
