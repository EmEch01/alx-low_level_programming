#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* print_list - Prints all the elements of a list_t list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
size_t knot = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", h->str);
}

if (h->next != NULL)
{
printf(" ");
}

h = h->next;
knot++;
}

printf("\n");

return (knot);
}
