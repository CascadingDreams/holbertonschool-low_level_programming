#include "lists.h"

/**
 * dlistint_len - returns the num of elements in a linked list
 * @h: header of list
 *
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
