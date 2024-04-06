#include "lists.h"

/**
* insert_dnodeint_at_index - adds a node at index of a double linked list
* @h: pointer to the pointer to the first node of the list
* @idx: index of the list
* @n: integer included in the new node
* Return: address of the newly added node or NULL on failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		idx--;
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;

	return (new);
}
