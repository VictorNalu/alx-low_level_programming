#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new code, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *count;
listint_t *sub = *head;

count = malloc(sizeof(listint_t));
if (!count)
return (NULL);

count->n = n;
count->next = NULL;

if (*head == NULL)
{
*head = count;
return (count);
}

while (sub->next)
sub = sub->next;

sub->next = count;

return (count);
}
