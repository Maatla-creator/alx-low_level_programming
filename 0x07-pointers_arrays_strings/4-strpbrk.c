#include "holberton.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * @s : string parameter
 * @accept : reference string parameter
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m, n;

	m = 0;
	n = 0;

	for (m = 0; *(s + m) != '\0'; m++)
	{
		for (n = 0; *(accept + n) != '\0'; n++)
		{
			if (*(s + m) == *(accept + n))
				return (s + m);
		}
	}
	return ('\0');
}
