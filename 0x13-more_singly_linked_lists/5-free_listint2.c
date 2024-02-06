#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
    listint_t *next;

    if (head)
    {
        while (*head)
        {
            next = (*head)->next;
            free(*head);
            *head = next;
        }
    }
}
