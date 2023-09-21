#include "main.h"

/**
 *_strcmp - Compare two string
 * @s1: First string
 * @s2: Second String
 *
 * Return: Integer number.
 */

int _strcmp(char *s1, char *s2)
{
	char *r = s1;
	char *l = s2;
	int equal = 0;

	while (*r || *l)
	{
		equal = *r - *l;
		if (equal != 0)
			return (equal);
		r++;
		l++;
	}
	return (equal);
}
