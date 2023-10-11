#include <stdio.h>
/**
 * print_name - Display name
 * @name: name of a person.
 * @f: function pointer
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
