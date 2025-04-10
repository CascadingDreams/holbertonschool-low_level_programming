#include "lists.h"

/**
 * list_len - returns num of elements in list_t list
 * @h: header
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
