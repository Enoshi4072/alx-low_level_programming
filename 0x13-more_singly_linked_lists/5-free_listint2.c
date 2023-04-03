#include "lists.h"
/**
 * free_listint2 - frees a the memory address of listint_t
 * @head: The list to be freed
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr_node;

	while (*head != NULL)
	{
		ptr_node = (*head)->next;
		free(*head);
		*head = ptr_node;
	}
	*head = (NULL);
}
