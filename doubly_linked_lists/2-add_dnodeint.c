#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to pointer of head node
 * @n: numbers
 *
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_new_node = malloc(sizeof(dlistint_t));

	if (first_new_node == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	first_new_node->n = n;
	first_new_node->next = *head;
	*head = first_new_node;

	return (first_new_node);
	free(first_new_node);
}
