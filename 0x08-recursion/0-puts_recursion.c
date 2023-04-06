#include "main.h"

/**
 * _puts_recursion - function like puts(a string, followed by a new line)
 * @s: parameter input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
