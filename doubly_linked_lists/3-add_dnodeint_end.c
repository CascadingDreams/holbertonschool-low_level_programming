#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @n: The integer value to store in the new node.
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_end = malloc(sizeof(dlistint_t));
	dlistint_t *last_node;

	if (!new_node_end)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	new_node_end->n = n;
	new_node_end->next = NULL;
	new_node_end->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node_end;
	new_node_end->prev = last_node;

	return (new_node_end);
	free(new_node_end);
}
