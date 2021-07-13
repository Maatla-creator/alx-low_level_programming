#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: array size
 *@c: character to be initialized
 * Return: pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	i = 0;
	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
