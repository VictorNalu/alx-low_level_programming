#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prv = NULL;
listint_t *nexxt = NULL;

while (*head)
{
nexxt = (*head)->nexxt;
(*head)->nexxt = prv;
prv = *head;
*head = nexxt;
}

*head = prv;

return (*head);
}
