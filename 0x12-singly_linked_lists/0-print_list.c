#include "main.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to the head of the list_t list
 * return:The number of nodes in the list_t list
 */
size_t print_list(const list_t *h)
{
	size_t num_data = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nill)\n");
		h = h->next;
		num_data++;
	}
	return (num_data);
}
