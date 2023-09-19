#include "main.h"

/**
 * swap_int - Swap two integers
 * @a: first value
 * @b: second value
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int pek;

	pek = *a;
	*a = *b;
	*b = pek;
}
