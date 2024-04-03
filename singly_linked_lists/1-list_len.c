#include "lists.h"

/**
* print_list - function that prints the content of a linked list
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

	printf("-> %lu elements\n", n);

	return (n);
}
