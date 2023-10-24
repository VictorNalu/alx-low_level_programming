#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a linked list.
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_ *count;

	count = malloc(sizeof(listint_t));
	if (!count)
		return (NULL);
	count->n = n;
	count->next = *head;
	*head = count;

	return (count);
}
