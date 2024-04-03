#include "lists.h"

/**
* print_list - function that prints the content of a linked list
* @h: pointer to the list to be printed
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("[%d]\n", h->data);
		h = h->next;
		n++;
	}

	printf("-> %lu elements\n", n);

	return (n);
}