#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: node
 * @idx: index number
 * @n: num
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current = *h;
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current != NULL && count < idx)
	{
		count++;
		current = current->next;
	}
	if (current != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			printf("Memory allocation failed\n");
			return (NULL);
		}
		new_node->n = n;
		new_node->prev = current->prev;
		new_node->next = current;
		current->prev->next = new_node;
		current->prev = new_node;

		return (new_node);
	}
	else if (idx == count)
	{
		return (add_dnodeint_end(h, n));
	}

	return (NULL);
}
