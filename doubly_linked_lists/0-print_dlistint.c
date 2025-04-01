#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to header
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		if (h->n == 0)
		{
			printf("0\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
