#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list
 * @head: pointer to the header
 * @index: node that should be deleted.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *m1;
	dlistint_t *m2;
	unsigned int i;

	m1 = *head;

	if (m1 != NULL)
		while (m1->prev != NULL)
			m1 = m1->prev;

	i = 0;

	while (m1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = m1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				m2->next = m1->next;

				if (m1->next != NULL)
					m1->next->prev = m2;
			}

			free(m1);
			return (1);
		}
		m2 = m1;
		m1 = m1->next;
		i++;
	}

	return (-1);
}
