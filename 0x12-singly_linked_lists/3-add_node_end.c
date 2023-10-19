#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: A pointer to the head of the list.
* @str: The string to be added to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*
* Note: `str` needs to be duplicated.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;

/* Allocate memory for the new node. */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

/* Duplicate the string. */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

/* Set the next pointer of the new node to NULL. */
new_node->next = NULL;

/* If the list is empty, make the new node the head of the list. */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Find the last node in the list. */
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}

/* Set the next pointer of the last node to the new node. */
last_node->next = new_node;

return (new_node);
}
