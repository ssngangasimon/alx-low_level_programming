#include "lists.h"

/**
 * listint_len - function returns number of elements in linked listint_t list
 * @h: linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
