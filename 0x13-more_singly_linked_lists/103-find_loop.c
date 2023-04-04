#include "lists.h"
#include "lists.h"
/**
 * find_listint_loop - Finds the start of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - a pointer to the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *normal, *ahead;

	if (!head)
		return (NULL);

	normal = head;
	ahead = head;

	while (ahead && ahead->next)
	{
		normal = normal->next;
		ahead = ahead->next->next;

		if (normal == ahead)
		{
			normal = head;

			while (normal != ahead)
			{
				normal = normal->next;
				ahead = ahead->next;
			}
			return (normal);
		}
	}
	return (NULL);
}
