#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new = malloc(sizeof(listint_t));
    listint_t *temp = *head;
    unsigned int i = 0;

    if (new)
    {
        new->n = n;
        while (temp)
        {
            if (i == idx - 1)
            {
                new->next = temp->next;
                temp->next = new;
                return (new);
            }
            i++;
            temp = temp->next;
        }
    }
    return (NULL);
}
