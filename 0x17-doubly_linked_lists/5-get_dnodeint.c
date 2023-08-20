#include "lists.h"

/**
 * *get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: pointer to the  head.
 * @index: index of the node, starting from 0
 *
 * Return: NULL if the node is non-existent.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t counter = 0;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	if (node->prev)
		node = node->prev;
	while (counter < index && node)
	{
		node = node->next;
		counter++;
	}
	return (node);
}
