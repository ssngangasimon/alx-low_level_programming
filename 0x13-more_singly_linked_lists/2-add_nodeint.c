#include "lists.h"

/**
 * add_nodeint - function that adds new node at beginning of listint_t list
 * @head: to first node
 * @n: data
 *
 * Return: address to new address, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
