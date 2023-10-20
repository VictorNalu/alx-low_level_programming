#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: the string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *newnode;

if (head == NULL || str == NULL)
return (NULL);
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);

if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
newnode->len = 0;
while (str[newnode->len])
newnode->len++;

newnode->next = *head;
*head = newnode;

return (newnode);
}
