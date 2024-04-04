#include "lists.h"

/**
* print_dlistint - function that prints the content of a doubly linked list
* @h: pointer to the first node
*
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
