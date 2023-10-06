#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concat
 * @s2: second string to concat
 *
 * Return: concats of s1 and s2, Or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int a1 = 0, a2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a1] != '\0')
		a1++;
	while (s2[a2] != '\0')
		a2++;

	new_str = (char *)malloc(sizeof(char) * (a1 + a2 + 1));
	if (new_str == NULL)
		return (NULL);

	while (*s1)
		new_str[i++] = *s1++;

	while (*s2)
		new_str[i++] = *s2++;

	new_str[i] = '\0';

	return (new_str);

}
