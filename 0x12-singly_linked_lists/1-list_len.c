#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this function returns the number of elements in a linked list_t
 * list
 * @h: Const pointer of linked list_t list
 * Return: Number of elements in linked list_t list
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
