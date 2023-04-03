#include "lists.h"

/**
 * print_listint - prints all the lements of listint_t
 * @h: The linked list of tyte listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
