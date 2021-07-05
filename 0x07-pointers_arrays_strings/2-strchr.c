#include "holberton.h"
/**
 * _strchr - returns a pointer to the first accurrence
 * of the character c in the string
 *
 * @s : string in which to find the first occurrence of char c
 * @c : char to find in string s
 *
 * Return: pointer to the fist occurence of char c, NULL if not found
 *
 *
 */

char *_strchr(char *s, char c)
{
	unsigned int m;

	m = 0;
	while (*(s + m) != '\0')
	{
		if (*(s + m) == c)
		{
			return (s + m);
		}

		m++;
	}

	return ('\0');
}
