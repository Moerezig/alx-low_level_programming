#include "main.h"

/**
 * _puts_recursion - print a string using recursion.
 * @s: string for printing
 *
 * Return: nothing
 */
void _puts_recursion(char *C)
{
	if (*C != '\0')
	{
		_putchar(*c);
		_puts_recursion(++C);
	}
	else
		_putchar('\n');
}
