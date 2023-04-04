#include "lists.h"
/**
 * delete_nodeint_nodeint_at_index - Deletes a node at a given index
 * @head: Pointer to the first node of the list
 * @index: The position of the node to be deleted
 * Return: 1 id successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodeptr, *temp;
	unsigned int i;
	if (*head == NULL)
	       return (-1);
	nodeptr = *head;
	if ( index == 0)
	{
		nodeptr = (*head)->next;
		*head = nodeptr;
		free (nodeptr);
		return (1);
	}
	for (i = 0; nodeptr != NULL && i<= index; i++)
	{
		nodeptr = nodeptr->next;
	}
	nodeptr = 
