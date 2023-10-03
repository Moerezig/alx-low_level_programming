#include <stdlib.h>

/**
 * create_array - create and init array with a c character.
 * @size: size of the array
 * @l:character to init the array
 *
 * Return: pointer to array created.
 */

char *create_array(unsigned int size, char l)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(*array) * size);
	if (array == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = l;
	return (array);
}
