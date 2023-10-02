#include "main.h"

/**
 * _islower - Test wheter c is lowercase
 * @c: Caracter to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
