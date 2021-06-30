#include "holberton.h"
/**
 * _strncpy - copies a string
 *
 * @dest: string  destination paramter
 * @src: string source paramter
 * @n: number of bytes from source
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
		{
			dest[j] = src[j];
		}
		else
		{
			dest[j] = '\0';
		}
	}

	return (dest);
}
