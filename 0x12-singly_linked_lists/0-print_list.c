#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a linked list and return the number of nodes
 * @hp: pointer to the head of the linked list
 * Return:the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		num++;
		h = h->next;
	}
		return (num);
}
