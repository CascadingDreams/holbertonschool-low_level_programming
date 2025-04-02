#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: first node in the list
 * @n: numbers
 *
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_new_node = malloc(sizeof(dlistint_t));
	dlistint_t *old_head;

	if (first_new_node == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	first_new_node->n = n;
	first_new_node->next = *head;

	old_head = *head;
	if (*head != NULL)
	{
		old_head->prev = first_new_node;
	}
	*head = first_new_node;

	return (first_new_node);
	free(first_new_node);
}
