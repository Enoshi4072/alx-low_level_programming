#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t total = 0;
const listint_t *ptr_current, *ptr_next;
	if (head == NULL)
		exit(98);

	ptr_current = head;
	while (ptr_current != NULL)
	{
		ptr_next = ptr_current->next;
		total++;
		printf("[%p] %d\n", (void *)ptr_current, ptr_current->n);
		if (ptr_next >= ptr_current)
		{
			printf("-> [%p] %d\n", (void *)ptr_next, ptr_next->n);
			break;
		}
		ptr_current = ptr_next;
	}
	return (total);
}
