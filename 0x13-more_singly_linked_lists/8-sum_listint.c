#include "lists.h"

/**
 * sum_listint - return sum of all data in listint_t list
 * @head: first node
 *
 * Return: Sum, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
