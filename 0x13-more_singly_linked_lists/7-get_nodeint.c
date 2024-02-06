#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * *get_nodeint_at_index - a function that returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list or NULL if the node does not exist
 */
 
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    while (head)
    {
        if (i == index)
            return (head);
        i++;
        head = head->next;
    }
    return (NULL);
}
