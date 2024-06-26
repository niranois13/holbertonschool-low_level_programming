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
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}

	return (n);
}
