#include "lists.h"

/**
* free_list - function that frees allocated memory of a linked list
* @head: pointer to the first node of the linked list
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

