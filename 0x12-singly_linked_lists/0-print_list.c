#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list -  prints all the elements of a linked list
 * @h: pointer to the head of the linked list
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

		h = h->next;
		num++;
	}
		return (num);
}
