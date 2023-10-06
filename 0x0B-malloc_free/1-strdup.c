#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns pointer to a newly duplicated allocated space,
 * which contains a copy of string given
 * @str: string to duplicate
 *
 * Return: NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));
	if (new_str == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		new_str[r] = str[r];

return (new_str);
}
