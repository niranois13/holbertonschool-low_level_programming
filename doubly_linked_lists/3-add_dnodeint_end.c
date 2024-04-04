#include "lists.h"

/**
* add_dnodeint_end - adds a node at the end of a doubly linked list
* @head: pointer to the first node of the list
* @n: an integer
* Return: address of the newly added node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tail;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	tail = *head;

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new_node;

	new_node->prev = tail;
	new_node->next = NULL;

	return (new_node);
}
