#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* struct list_t - definition of a linked list structure
* @data: data hold by a node
* @next: pointer to the next node
*/
typedef struct list_t
{
	int data;
	struct list_t *next;
} list_t;

/* Functions prototypes */
size_t print_list(const list_t *h);

#endif /* LIST_H */
