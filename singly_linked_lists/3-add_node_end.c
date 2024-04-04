#include "lists.h"

/**
* add_node_end - function that adds nodes at the end of a linked list
* @head: pointer to the first node of the list
* @str: string to include in the added nodes
* Return: address of the new node or NULL on failure
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node;
	list_t *tail;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}

	while (str[len] != '\0')
		len++;


	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}

	return (new_node);
}
