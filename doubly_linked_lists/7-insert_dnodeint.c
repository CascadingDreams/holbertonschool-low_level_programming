#include "lists.h"

/**
 * 
 * 
 * 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int count = 0;
    dlistint_t *current = *h;
    dlistint_t *new_node;

    while (current != NULL)
    {
        if (idx == count)
        {
            new_node = malloc(sizeof(dlistint_t));
            if (new_node == NULL)
            {
                printf("Memory allocation failed\n");
                return (NULL);
            }

            new_node->n = n;
            new_node->next; // the address of 98
            new_node->prev; // the address of 4

            current->prev = new_node; //98 points back to 4096
            new_node->next = current->prev; //4096 points to 98
            new_node->prev = 

            printf("index: %u\n", idx);
            printf("NewNode:\tn: %d\n", new_node->n);
            printf("NewNode:\tlinking next: %p and prev: %p\n", (void *)new_node->next, (void *)new_node->prev);
            printf("CurrentNode:\tn: %d\n", current->n);
            printf("CurrentNode:\tlinking next: %p and prev: %p\n", (void *)current->next, (void *)current->prev);

            /* new_node->next = current->prev; */
        }
        count++;
        current = current->next;
    }
    return (new_node);
    free (new_node);
}
