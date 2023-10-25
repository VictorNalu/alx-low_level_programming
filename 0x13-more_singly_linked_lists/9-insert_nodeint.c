#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *count;
listint_t *sub = *head;

count = malloc(sizeof(listint_t));
if (!count || !head)
return (NULL);

count->n = n;
count->next = NULL;

if (idx == 0)
{
count->next = *head;
*head = count;
return (count);
}

for (i = 0; sub && i < idx; i++)
{
if (i == idx - 1)
{
count->next = sub->next;
sub->next = count;
return (count);
}
else
sub = sub->next;
}

return (NULL);
}
