#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *sub = head;

while (sub)
{
sum += sub->n;
sub = sub->next;
}

return (sum);
}

