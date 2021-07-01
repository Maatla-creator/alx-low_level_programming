#include "holberton.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: string destination pointer parameter
 * @src: string source pointer parameter
 * @n: number of bytes from source
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, j;

	m = 0;
	j = 0;

	while (*(dest + m) != '\0')
	{
		m++;
	}

	while (j < n)
	{
		*(dest + m) = *(src + j);

		if (*(src + j) == '\0')
			break;
		m++;
		j++;
	}

	return (dest);
}
