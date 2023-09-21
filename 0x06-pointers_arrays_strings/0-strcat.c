#include "main.h"

/**
 * char *_strcat - Joint two string
 * @dest: String to destine
 * @src: String source
 *
 * Return: Pointer to string concatenated
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
