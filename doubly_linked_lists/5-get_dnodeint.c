#include "lists.h"

/**
* get_dnodeint_at_index - returns a specific node of a double linked list
* @head: pointer to the first node of the list
* @index: designate the specific node to return
* Return: address of this specific node or NULL on failure
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	if (i == index)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
