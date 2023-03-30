#include "main.h"
/**
 * free_list - frees the memory allocated to list_t list
 * @head: pointer to the list_t
 */
void free_list(list_t *head)
{
	list *temp_ptr;

	while (head != NULL)
	{
		temp_ptr = head->next;
		free(head->str);
		free(head);
		head = temp_ptr;
	}
}
