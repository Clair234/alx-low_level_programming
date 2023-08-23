#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_putchar(s + 1);
	}
}
