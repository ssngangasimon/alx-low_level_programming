#include "lists.h"

/**
 * free_listint - function that frees listint_t list
 * @head: listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
