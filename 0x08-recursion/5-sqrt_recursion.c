#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the number, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - Helper function for calculating the square root recursively.
 * @n: The number to calculate the square root of.
 * @start: The starting value for the search.
 * @end: The ending value for the search.
 *
 * Return: The natural square root of the number, or -1 if n does not have a natural square root.
 */
int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (end < start)
		return (-1);

	mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);

	if (mid * mid > n)
		return (sqrt_helper(n, start, mid - 1));

	return (sqrt_helper(n, mid + 1, end));
}
