#include "lists.h"

/**
* free_dlistint - function that frees allocated memory of a double linked list
* @head: pointer to the first node of this list
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
