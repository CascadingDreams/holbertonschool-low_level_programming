#include "lists.h"

/**
 * free_list - fress a list_t list
 * @head: header
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;	   /* Store the current node */
		head = head->next; /* Move to the next node */
		free(temp->str);
		free(temp);
	}
}
