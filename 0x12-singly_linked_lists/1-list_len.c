#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in list
 * @h: list_t list
 *
 * Return: # of elemens in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
