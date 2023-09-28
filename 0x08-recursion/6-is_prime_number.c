#include "main.h"

/**
 * is_prime_number - Returns 1 if the input integer is a prime number, otherwise returns 0.
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function for checking primality recursively.
 * @n: The number to check for primality.
 * @i: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}
