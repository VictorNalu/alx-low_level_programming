#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{

list_t *newnode;

list_t *reg = *head;

unsigned int len = 0;

while (str[len])
len++;
newnode = malloc(sizeof(list_t));
if (!newnode)
return (NULL);

newnode->str = strdup(str);

newnode->len = len;

newnode->next = NULL;


if (*head == NULL)
{

	*head = newnode;
	return (newnode);

}


	while (reg->next)

	reg = reg->next;

	reg->next = newnode;

	return (newnode);

}
