#include "main.h"

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (palindrome_helper(s, 0, len - 1));
}

/**
 * palindrome_helper - Helps function for checking if a string is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (palindrome_helper(s, start + 1, end - 1));
}
