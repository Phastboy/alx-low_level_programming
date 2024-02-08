#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: double pointer to the head of the list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *temp;

    while (*h)
    {
        count++;
        if (*h > (*h)->next)
        {
            temp = (*h)->next;
            free(*h);
            *h = temp;
        }
        else
        {
            free(*h);
            *h = NULL;
        }
    }
    *h = NULL;
    return (count);
}

