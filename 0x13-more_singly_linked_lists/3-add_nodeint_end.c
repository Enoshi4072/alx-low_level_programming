#include "lists.h"
/**
 * listint_t  - Function adds a new node at the end of a listint_t
 * @head: Pointer to the first node of the list
 * @n: The data to insert at that new node
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr_newnode, *prev;

	ptr_newnode = (listint_t *) malloc(sizeof(listint_t));
	if (ptr_newnode == NULL)
		return (NULL);
	ptr_newnode->n = n;
	ptr_newnode->next = NULL;
	prev = *head;
	if (*head == NULL)
	{
		*head = ptr_newnode;
		return (ptr_newnode);
	}
	while (prev->next != NULL)
		prev = prev->next;
	prev->next = ptr_newnode;
return (ptr_newnode);
}

