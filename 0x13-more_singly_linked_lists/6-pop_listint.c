#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *sub;
int count;

if (!head || !*head)
return (0);

count = (*head)->n;
sub = (*head)->next;
free(*head);
*head = sub;

return (count);
}
