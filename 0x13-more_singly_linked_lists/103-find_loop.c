#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: address of the node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
    for (; head; head = head->next)
    {
        if (head->next >= head)
        {
            return (head->next);
        }
    }
    return (NULL);
}
