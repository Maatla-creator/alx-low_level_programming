#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be duplicated
 *
 * Return: pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i = 0, n;
	char *ar;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}

	ar = (char *)malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
		ar[n] = str[n];
	ar[n] = '\0';
	return (ar);
}
