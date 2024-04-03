#include "lists.h"

/**
* list_len - function that prints the length of a linked list
* @h: pointer to the list to be printed
* Return: number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
