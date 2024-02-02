#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
    size_t nodes = 0;

    while (h) {
        nodes++;
        h = h->next;
    }
    return (nodes);
}

