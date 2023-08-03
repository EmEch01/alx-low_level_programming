#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: converted number, or 0 if there is one or more chars or 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
	return (0); (Return 0 if 'b' is NULL)
	}

	size_t length = strlen(b);
	unsigned int result = 0;

	for (size_t i = 0; i < length; i++)
	{
	char current_char = b[i];
	if (current_char != '0' && current_char != '1')
	{
		return (0); (Return 0 if there is a character that is not '0' or '1')
	}
	result = (result << 1)+(current_char - '0');
	}

	return (result);
}
