#include "lists.h"
#include <string.h>

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
 * add_node - adds a new node to the beginning of list
 * @head: head pointer
 * @str: string
 *
 * Return: address to new node
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	new_node->len = _strlen(str);

	return (new_node);
	free(new_node);
}
