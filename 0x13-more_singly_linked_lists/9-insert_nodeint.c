#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a node ata given position
 * @head: pointer to the first node of the list
 * @idx: The index at which the new node is inserted
 * @n: The integer to add
 * Return: Address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodeptr, *prev;
	unsigned int i;

	nodeptr = (listint_t *) malloc(sizeof(listint_t));
	if (nodeptr == NULL)
		return (NULL);
	nodeptr->n = n;
	nodeptr->next = NULL;
	if (*head == NULL)
		return (NULL);
	prev = *head;
	if (idx == 0)
	{
		nodeptr->next = *head;
		*head = nodeptr;
		return (nodeptr);
	}
	for (i = 0; (prev != NULL) && i < idx - 1; i++)
		prev = prev->next;
	if (i != idx)
		return (NULL);
	nodeptr->next = prev->next;
	prev->next = nodeptr;

return (nodeptr);
}
