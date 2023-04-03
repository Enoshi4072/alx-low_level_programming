#include "lists.h"
/**
 * add_nodeint - Adds a node at the beginning of a listint_t
 * @head: The tag to the node to add at the beginning
 * @n: The integer to add
 * Return: The address of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptrnewnode;

	ptrnewnode = (listint_t *) malloc(sizeof(listint_t));
	if (ptrnewnode == NULL)
		return (NULL);
	ptrnewnode->n = n;
	ptrnewnode->next = *head;
	*head = ptrnewnode;
return	(ptrnewnode);
}
