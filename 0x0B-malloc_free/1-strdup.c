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
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '0')
		len++;

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		new_str[len] = str[len];

return (new_str);
}
