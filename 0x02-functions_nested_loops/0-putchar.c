#include "main.h"

/**
 * main - Print _putchar word
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "_putchar";
	int ch = 0;

	while (str[ch] != '\0')
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
	return (0);
}

