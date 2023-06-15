#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *temp,*temp1, *temp2, **temp3,*h_null, *h_2;
	dlistint_t **temp4;
	unsigned int len;
	len = 0;
	temp1 = *h;
	temp = *h;
	temp3 = h;
	temp4 = h;
	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->prev = NULL;
	n_node->n = n;
	n_node->next = NULL;	

	if(*h == NULL)
	{
		h_null = add_dnodeint(temp3, n);
		return (h_null);
	}
	
	while(temp1 != NULL)
	{
		len++;
		temp1 = temp1->next;
	}
	if (idx > len)
	{
		return (NULL);
	}
	if (len == 1)
	{
		h_2 = add_dnodeint_end (temp4, n);
		return (h_2);
	}
	while(idx != 1 && temp->next != NULL)
	{
		idx--;
		temp = temp->next;
	}
	temp2 = temp->next;
	n_node->next = temp2;
	temp2->prev = n_node;
	temp->next = n_node;
	n_node->prev = temp;
	return(n_node);
}
