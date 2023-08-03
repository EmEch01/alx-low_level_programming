#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: points to the number to change
 * @index: index starting from 0 the bit
 *
 * Return: 1 for success, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
