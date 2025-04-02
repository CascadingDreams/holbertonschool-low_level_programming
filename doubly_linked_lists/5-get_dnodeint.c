#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve (starting from 0).
 * Return: Pointer to the node, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		count++;
		head = head->next;
		if (index == count)
		{
			return (head);
		}
	}
	return (NULL);
}
