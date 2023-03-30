#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list-t
 * @head: pointer to pointer to the list_t list
 * @str: The string to be duplicated
 * Return: The address of the new element or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n_node, *temp_ptr = *head;
unsigned int len = 0;

while (str[len])
	len++;
n_node = malloc(sizeof(list_t));
if (n_node == NULL)
	return (NULL);
n_node->str = strdup(str);
n_node->len = len;
n_node->next = NULL;
if (*head == NULL)
{
	*head = n_node;
	return (n_node);
}
while (temp_ptr->next != NULL)
	temp_ptr = temp_ptr->next;
temp_ptr->next = n_node;
return (n_node);
}

