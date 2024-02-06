#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: integer to be included in the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new = malloc(sizeof(listint_t));
    listint_t *last = *head;

    if (new)
    {
        new->n = n;
        new->next = NULL;
        if (!*head)
        {
            *head = new;
            return (new);
        }
        while (last->next)
            last = last->next;
        last->next = new;
        return (new);
    }
    return NULL;
}
