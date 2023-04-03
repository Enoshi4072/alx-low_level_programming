#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: The list to get the 9th element
 * @index: The position at which the nth element is located
 * Return: The nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodeptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	nodeptr = head;
	for (i = 0; i < index; i++)
		nodeptr = nodeptr->next;
	return (nodeptr);
}
