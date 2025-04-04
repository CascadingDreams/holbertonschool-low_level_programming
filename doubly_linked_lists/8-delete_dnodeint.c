#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of list
 * @head: head node
 * @index: index num
 *
 * Return: 1 if successful -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	while (current_node != NULL && count < index)
	{
		current_node = current_node->next;
		count++;
	}

	if (current_node == NULL)
	{
		return (-1);
	}
	if (current_node->prev == NULL)
	{
		*head = current_node->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else if (current_node->next == NULL)
	{
		current_node->prev->next = NULL;
	}
	else
	{
		current_node->prev->next = current_node->next;
		current_node->next->prev = current_node->prev;
	}
	free(current_node);
	return (1);
}
