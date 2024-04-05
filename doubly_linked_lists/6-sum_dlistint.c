#include "lists.h"

/**
* sum_dlistint - function that sums up int stored in a double linked list
* @head: pointer to the first node of the list
*
* Return: the result
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
