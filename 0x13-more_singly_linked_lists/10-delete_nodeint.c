#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp = *head;
    listint_t *next;
    unsigned int i = 0;

    if (temp)
    {
        if (index == 0)
        {
            *head = temp->next;
            free(temp);
            return (1);
        }
        while (temp)
        {
            if (i == index - 1)
            {
                next = temp->next;
                if (next)
                {
                    temp->next = next->next;
                    free(next);
                    return (1);
                }
            }
            i++;
            temp = temp->next;
        }
    }
    return (-1);
}
