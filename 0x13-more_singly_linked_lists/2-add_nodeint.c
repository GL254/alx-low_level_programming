#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: pointer to the first node.
 * @n: data.
 *
 * Return: pointer to the new node, or null if it fails
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
