#include "lists.h"

/**
* dlistint_len - calculates the number of nodes in a doubly linked list
* @h: pointer to the first node of the list
*
* Return: number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
