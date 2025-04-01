#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to
 *
 * Return: the num of nodes, [0] (nil) if NULL
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
