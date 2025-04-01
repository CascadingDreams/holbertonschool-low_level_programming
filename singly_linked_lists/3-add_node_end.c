
#include "lists.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The input string to measure
 *
 * Return: Number of characters in the string (excluding null terminator)
 */
unsigned int _strlen(const char *s)
{
	unsigned int count = 0;

	if (s == NULL)
		return (0);

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * add_node_end - adds a new node to the end of list
 * @head: head pointer
 * @str: string
 *
 * Return: address to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *end_node;
	list_t *last_node;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->str = strdup(str);
	end_node->len = _strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = end_node;

	return (end_node);
	free(end_node);
}
