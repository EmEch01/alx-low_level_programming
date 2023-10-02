#include "main.h"

/**
* _puts - prints a string to stdout
* @s: input string
*
* Return: void
*/
void _puts(char *s)
{
int i = 0;

while (*(s + i))
{
putchar(*(s + i));
i++;
}
putchar('\n');
}
