#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 * Return: number of elements present in h
 */

size_t list_len(const list_t *h)
{
size_t number = 0;
while (h != NULL)
{
	number++;
	h = h->next;
}
return (number);
}
