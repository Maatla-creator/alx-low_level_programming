#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 *@src: first pointer in _strcat.
 *@dest: second pointer in _strcat.
 * Return: pointer to dest string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);

		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
