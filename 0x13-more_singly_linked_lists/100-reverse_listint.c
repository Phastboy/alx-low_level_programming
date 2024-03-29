#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *next = NULL;
    for (; *head; *head = next)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
    }
    *head = prev;
    return (*head);
}
