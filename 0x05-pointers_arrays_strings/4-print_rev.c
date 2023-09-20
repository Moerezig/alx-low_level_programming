#include "main.h"

/**
 * print_rev - Display a string s in reverse sense.
 * @s: string to reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i, count = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
