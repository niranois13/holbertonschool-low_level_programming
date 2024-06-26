#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* struct list_t - definition of a linked list structure
* @str: a string
* @len: length of the string
* @next: pointer to the next node
*/
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

/* Functions prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LIST_H */
