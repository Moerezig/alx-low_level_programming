#include "main.h"

/**
 * char *_strcat - Joint two string
 * @dest: String to destine
 * @src: String source
 *
 * Return: Pointer to string concatenated
 */

char *_strcat(char *dest, char *src);
{
	int s;
	int m;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[s] = src[m];
		s++;
		m++;
	}
	dest[s] = '\0';
	return (dest);
}
