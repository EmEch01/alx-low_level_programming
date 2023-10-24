#include "lists.h"
#include <stdio.h>

/**
* add_nodeint - Adds a new node at the beginning of a listint_t list
* @head: the head of the linked list
* @n: Integer value to be added to the new node
*
* Return: The address of the new element, or NULL if it fail
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;

ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);

ptr->n = n;
ptr->next = *head;
*head = ptr;

return (ptr);
}
