#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: integer to be included in the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    if (head)
    {
        listint_t *new = malloc(sizeof(listint_t));
        if (new)
        {
            new->n = n;
            new->next = *head;
            *head = new;
            return (new);
        }
    }
    return (NULL);
}
