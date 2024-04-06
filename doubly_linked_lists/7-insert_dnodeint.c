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
	dlistint_t *new_node, *current;

	if (h == NULL)
		return (NULL);

	current = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

	while (idx != 0 && current->next != NULL)
	{
		current = current->next;
		idx--;
	}

	if (idx > 0)
	{
		free(new_node);
		return (NULL);
	}

		new_node->next = current->next;
		new_node->prev = current;
		current->next->prev = new_node;
		current->next = new_node;

	return (new_node);
}
