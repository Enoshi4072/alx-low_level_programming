#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A pointer to a pointer to the head of the list_t list
 * @str: The string to bestored in the new node
 * Return: The addres of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int length = 0;

	while (str[len])
		len++;
	n_node = malloc(sizeof(list_t);
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	n_node->length = length;
	n_node->next = (*head);
	(*head) = n_node;
	return (*head);
}
